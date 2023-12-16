n = int(input())

l = ["1","1","1"]


# for i in range(n-1):
#     r = i%3
#     l[r] = "1"*(len(l[r])+1)
#     print("r",r)
#     print(l)
#     print()


# result = 0
# for i in range(3):
#     result += int(l[i])
# print(result)

if n != 1: 
    l = [1]*50
    for i in range(1,50):
        l[i] = l[i-1]+3*(i)
    print(l)

    for index,num in enumerate(l):
        tmp = index
        if num >= n:
            break
    # print("tmp",tmp)

    s = []
    for i in range(tmp+1):
        s.append("1"*(i+1))
    # print(s)
    # print()

    answer = 0
    answer += int(s[tmp]) 

    number = n - l[tmp-1]
    print(number)
    print()


    l_2 = [1]*50
    for i in range(1,50):
        l_2[i] = l_2[i-1]+(i+1)
    # print(l_2)

    n_2 = n - l[tmp-1]
    for index,num in enumerate(l_2):
        tmp = index
        if num >= n_2:
            break
    # print("tmp",tmp)
    answer += int(s[tmp]) 

    abbab = [1,1,2,1,2,3,1,2,3,4,1,2,3,4,5,1,2,3,4,5,6,1,2,3,4,5,6,7]
    tmp = abbab[number-1]
    answer += int(s[tmp])
    print(answer)
else: print(3)


# second_num = number //2
# print(second_num)

# third_num = number % (second_num+1)
# print(third_num)
# answer = int(s[-1]) + int(s[number]) + int(s[])
