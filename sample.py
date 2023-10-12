import hydra
from omegaconf import OmegaConf, open_dict,DictConfig
import mlflow
import torch
import torch.nn as nn
import torch.nn.functional as F
import torch.optim as optim
from torch.utils.data import TensorDataset, DataLoader


# 3 x 28 x 28 -> 10
class Net(nn.Module):
    def __init__(self):
        super().__init__()
        self.conv1 = nn.Conv2d(3, 10, 5)
        self.conv2 = nn.Conv2d(10, 10, 5)
        self.fc1 = nn.Linear(4*4*10, 10)

    def forward(self, x):
        x = F.relu(self.conv1(x)) # 10 x  3 x 28 x 28 -> 10 x 10 x 24 x 24
        x = F.max_pool2d(x, 2)    # 10 x 10 x 24 x 24 -> 10 x 10 x 12 x 12
        x = F.relu(self.conv2(x)) # 10 x 10 x 12 x 12 -> 10 x 10 x  8 x  8
        x = F.max_pool2d(x, 2)    # 10 x 10 x  8 x  8 -> 10 x 10 x  4 x  4
        x = x.view(-1, 4*4*10)    # 10 x 10 x  4 x  4 -> 10 x 160          # エラーが発生するはず
        x = self.fc1(x)           # 10 x 160          -> 10 x 10
        return x

@hydra.main(config_name="config", version_base=None, config_path="conf")
def main(cfg: DictConfig) -> None:

    # データの生成
    data = torch.randn(10, 3, 28, 28)
    # ラベルの生成 (0~9の整数値)
    labels = torch.randint(0, 10, (10,))
    # TensorDatasetを作成
    dataset = TensorDataset(data, labels)
    # DataLoaderを作成
    batch_size = 4  # バッチサイズを指定
    trainloader = DataLoader(dataset, batch_size=batch_size, shuffle=True)

    net = Net()
    criterion = nn.CrossEntropyLoss()
    optimizer = optim.SGD(net.parameters(), lr=cfg.optimizer.momentum, momentum=cfg.optimizer.momentum)
    
    with open_dict(cfg):
        cfg.mlflow["tracking_uri"] = "file://" + hydra.utils.get_original_cwd() + "/mlruns"
        cfg.mlflow["artifact_uri"] = "file://" + hydra.utils.get_original_cwd() + "/mlruns/artifacts/"

    mlflow.set_tracking_uri(cfg.mlflow.tracking_uri)
    mlflow.set_artifact_uri(cfg.mlflow.artifact_uri)

    mlflow.set_experiment(cfg.mlflow.experiment_name)    

    with mlflow.start_run(run_name=cfg.mlflow.run_name):
        
        for epoch in range(cfg.train.epoch):
            runnning_loss = 0.0
            mlflow.log_params(cfg)
            # log_params_from_omegaconf_dict(cfg)
            for data,label in trainloader:
                optimizer.zero_grad()
                output = net(data)
                loss = criterion(output, label)
                loss.backward()
                optimizer.step()
                runnning_loss += loss.item()
            mlflow.log_metric("loss", runnning_loss/len(trainloader),step=epoch)


if __name__ == "__main__":
    main()
