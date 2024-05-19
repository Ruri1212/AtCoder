n,q = map(int,input().split())
t = list(map(int,input().split()))

bo = [1 for _ in range(n)]

for i in range(q):
    bo[t[i]-1] = 1 - bo[t[i]-1]
print(sum(bo))
