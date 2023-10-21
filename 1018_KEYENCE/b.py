# N= int(input())
# A = []
# for _ in range(N):
#   A.append(list(map(int,input().split())))
# A = sorted(A,key=lambda x:x[0],reverse = True)


# max_sum = 0
# for j in range(9,18):
#   max_1 = A[0][0]
#   d = A[0][1] - j
#   for i in range(1,N):
#     ti = A[i][1] -d 
#     if ti < 0:
#       ti = 24 + ti
#     if ti > 24:
#       ti = (ti-24)
#     if 9 <= ti < 18:
#       max_1 += A[i][0]
#   if max_1 > max_sum:
#     max_sum = max_1
# print(max_sum)


N= int(input())
A = []
for _ in range(N):
  A.append(list(map(int,input().split())))

max_sum = 0
for x in range(N):
  for j in range(9,18):
    max_1 = A[x][0]
    d = A[x][1] - j
    for i in range(N):
      if i != x:
        ti = A[i][1] -d 
        if ti < 0:
          ti = 24 + ti
        if ti > 24:
          ti = (ti-24)
        if 9 <= ti < 18:
          max_1 += A[i][0]
    if max_1 > max_sum:
      max_sum = max_1
print(max_sum)