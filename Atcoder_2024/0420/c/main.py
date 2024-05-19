n = int(input())
a = list(map(int,input().split()))


li = []
for i in range(n):
    while a[i] != i + 1:
        j = a[i] - 1
        li.append([i+1,j+1])
        a[i], a[j] = a[j], a[i]

print(len(li))
for i in li:
    print(i[0],i[1])

