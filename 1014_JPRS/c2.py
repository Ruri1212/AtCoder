N,T = input().split()
N = int(N)
S = [ input() for _ in range(N)]
ANS = []
s = ["a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"]
T_prime =[]
T_prime.append(T)
for i in range(len(T)):
    #削除
    T_prime.append(T[:i:]+T[i+1::])
    for al in s:
        #挿入
        T_prime.append(T[:i:]+al+T[i::])
        #置換
        T_prime.append(T[:i:]+al+T[i+1::])

for i in range(N):
    if S[i] in T_prime:
        ANS.append(i+1)
print(len(ANS))
print(*[ num for num in sorted(ANS)])

