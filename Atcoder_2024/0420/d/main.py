

def find(i,cluster):
    while i != cluster[i]:
        i = cluster[i]
    return i

n,m = map(int,input().split())
a = [ [] for _ in range(n)]

for i in range(m):
    x,y = map(int,input().split())
    x -=1
    y -=1
    if x < y:
        a[y].append(x)
    else: a[x].append(y)
    
ans = 0
for i in range(n):
    x = find(i,a[i])
    for j in a[i]:
        y = find(j,a[j])
        if x != y:
            ans += 1
print(ans)
        
    
