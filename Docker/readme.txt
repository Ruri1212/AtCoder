このDockerディレクトリは，atcoderの解答判定をローカル環境で実行するための環境構築をメモしておくものです．

以下のディレクトリ構造を作成する．中身のファイルはコピペでOK
Atcoder
    | - .devcontainer
    |    -devcontainer.json
    |    -docker-compose.yml
    |    -Dockerfile
    | -.vscode
         -tasks.json
    .
    .
    .
    |-abcooo　　## このように同じ階層に問題がダウンロードされていく

vscodeの拡張機能，dockerのインストール等が必要

必要なものをインストールしてから，vscodeの左下に
download contest 
test code
が表示されたら成功