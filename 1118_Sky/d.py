N,M =map(int,input().split())
A = list(map(int,input().split()))
C = [0 for _ in range(N)]

for i in range(M):
  C[A[i]-1] += 1
  print(C.index(max(C))+1)