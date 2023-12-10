N,M = map(int,input().split())
S = input()


DP = [ [0,0] for _ in range(N+1)]
DP[0][0] = M
need_t = 0
# print(f"[0]:   M: {DP[0][0]}, ロゴ: {DP[0][1]}, need_t: {need_t}")
for ind,num in enumerate(S):
    num = int(num)
    i = ind+1
    if num == 1:
        ## まず無地から
        if DP[i-1][0] >0:
            DP[i][0] = DP[i-1][0] -1
        ## 次にロゴ
        elif DP[i-1][0] == 0:
            if DP[i-1][1] > 0:
                DP[i][1]  = DP[i-1][1] -1
            else:
                need_t += 1
    elif num == 2:
        if DP[i-1][1] > 0:
            DP[i][1]  = DP[i-1][1] -1
        else:
            need_t += 1
    elif num == 0:
        DP[i][0] = M
        DP[i][1] = need_t
    # print(f"[{i}]:   M: {DP[i][0]}, ロゴ: {DP[i][1]}, need_t: {need_t}")

print(need_t)
