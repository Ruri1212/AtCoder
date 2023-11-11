T = "ababc"
T_prime =[]
for i in range(len(T)): 
    print(T[i+1:])


s = ["a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"]
for i in range(len(T)+1):
    #削除
    T_prime.append(T[:i:]+T[i+1::])
    for al in s:
        #挿入
        T_prime.append(T[:i:]+al+T[i::])
        #置換
        if i != len(T):
            T_prime.append(T[:i:]+al+T[i+1::])
# print(T_prime)

# s
# for i in range(len(s)):
    # print(s.replace(s[i],""))