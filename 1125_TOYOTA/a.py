N,L = map(int,input().split())
l = list(map(int,input().split()))
ans = 0
for i in range(N):
  if l[i] >= L:
    ans += 1
print(ans)