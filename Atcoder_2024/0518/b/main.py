n = int(input())
s = []
c = []
total = 0
for _ in range(n):
    x,y = input().split()
    s.append(x)
    c.append(int(y))
    total += int(y)
    
s = sorted(s)
winner = total % n
print(s[winner])