n = int(input())
a=[]
b = []
for i in range(n):
    tmp = list(input())
    a.append(tmp)
for i in range(n):
    tmp = list(input())
    b.append(tmp)

for i in range(n):
    for j in range(n):
        if a[i][j] != b[i][j]:
            print(i+1,j+1)
            exit()