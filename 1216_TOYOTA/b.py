li = [ "A" , "B" , "C" , "D" ,"E"]

S = sorted(input())
T = sorted(input())

s1 = li.index(S[0])
s2 = li.index(S[1])

t1 = li.index(T[0])
t2 = li.index(T[1])

if abs(s1-s2) == 3:
    d_s = 2
elif abs(s1-s2) == 4:
    d_s = 1
else: d_s = abs(s1-s2)

if abs(t1-t2) == 3:
    d_t = 2
elif abs(t1-t2) == 4:
    d_t = 1
else: d_t = abs(t1-t2)

if d_s == d_t:
    print("Yes")
else: print("No")
