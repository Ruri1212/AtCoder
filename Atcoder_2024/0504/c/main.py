n = int(input())
a = []
b = []
diff = []
for i in range(n):
    x,y = map(int,input().split())
    a.append(x)
    b.append(y)
    diff.append([i,y-x])

diff.sort(key = lambda x:x[1])
end_index = diff[-1][0]
del a[end_index]

print(sum(a)+b[end_index])