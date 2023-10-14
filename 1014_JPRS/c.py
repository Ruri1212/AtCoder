N,T = input().split()
N = int(N)
S = [ input() for _ in range(N)]
ANS = []
s = ["a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"]

def can_insert_one_char(T, T_prime):
    if len(T) != len(T_prime) + 1:
        return False  # 長さが条件を満たさない場合は不可能
    i = 0
    j = 0
    while i < len(T) and j < len(T_prime):
        if T[i] != T_prime[j]:
            if i != j:
                return False  # 挿入された文字が見つかりました
            i += 1
        else:
            i += 1
            j += 1
    return True

for i in range(N):   
    num = 0
    if len(T)==len(S[i]) or len(T)==len(S[i])+1 or len(T)==len(S[i])-1: 
        if T == S[i]:
            ANS.append(i+1)
        elif can_insert_one_char(T,S[i]):
            ANS.append(i+1)
        for j in range(len(S[i])):        
            if T == S[i][:j:]+S[i][j+1::]:
                ANS.append(i+1)   
            if T[j]!=S[i][j]:
                num += 1
        if num == 1:
            ANS.append(i+1)
print(len(ANS))
print(*[ num for num in sorted(ANS)])

