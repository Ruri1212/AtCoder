l = [list(map(int,input().split())) for _ in range(9)]


for i in range(9):
    if sorted(l[i]) != [1,2,3,4,5,6,7,8,9]:
        print("yoko,No")
        exit()

for i in range(9):
    if sorted([ l[j][i] for j in range(9) ]) != [1,2,3,4,5,6,7,8,9]:
        print("tate,No")
        exit()


    