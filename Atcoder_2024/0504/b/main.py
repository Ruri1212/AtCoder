s = input()
t = input()

index = 0
for num,i in enumerate(t):
    if i == s[index]:
        print(num+1,end=" ")
        index += 1
        