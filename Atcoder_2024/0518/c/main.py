n = int(input())
a = []
c = []
goukei = []
for i in range(n):
    x,y = map(int,input().split())
    a.append(x)
    c.append(y)
    goukei.append([x,y,i])

# cost でソート
goukei.sort(key= lambda x:goukei[1])

prev = goukei[0]
delete_idx = []
for now in goukei[1:]:
    # 前の方が強い場合
    if prev[0] > now[0]:
        delete_idx.append(now[2])
    prev = now

print(n-delete_idx)
for i in range(n):
    if i not in delete_idx:
        print(i,end = " ")
        
    