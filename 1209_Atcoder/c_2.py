N,M = map(int,input().split())
S = input()

## 最小枚数を0から調べる
for j in range(N+1):
    tmp = j  ## ロゴ
    m = M    ## 無地
    f = 1
    for i in S:
        num = int(i)
        if num == 1: ## 食事
            ## 無地から減らす
            if m > 0:
                m -= 1
            elif tmp > 0:
                tmp -= 1
        if num == 2:  ## イベント
            tmp -= 1
        if num == 0:  ## 選択
            tmp = j
            m = M
        ### 足りなくなる場合
        if tmp < 0:
            f = 0
            break        
    if f == 1:
        print(j)
        break
        
