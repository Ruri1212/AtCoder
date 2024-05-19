n,x,y,z = map(int,input().split())
sto = [i for i in range(min(x,y),max(x,y))]
if z in sto:
    print("Yes")
else: print("No")