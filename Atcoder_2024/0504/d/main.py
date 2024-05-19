n,k = map(int,input().split())
p = list(map(int,input().split()))


ruiseki = [0]
for index,num in enumerate(p[:-1]):
    ruiseki.append(ruiseki[index]+p[index])


    









index = [i+1 for i in range(n)]

merge = []
for p_i,index_i in zip(p,index):
    merge.append([p_i,index_i])
merge.sort(key = lambda x :x[1])











index_sort = [x[1] for x in merge]
ans = n
for i in range(n-k+1):
    mi_i = min(index_sort[i:i+k])
    ma_i = max(index_sort[i:i+k])
    tmp = ma_i - mi_i
    if tmp < ans:
        ans = tmp
print(ans)    