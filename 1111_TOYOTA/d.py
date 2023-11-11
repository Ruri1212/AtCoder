S = input()

l = [ 0 for _ in range(len(S))]


num_a = 0
num_b = 0
num_c = 0

i = 0
while i < len(S):

    if i+2 < (len(S)-1) and S[i]== "A" and S[i+1] == "B" and S[i+2] == "C":
        l[i] = l[i+1] = l[i+2] = -1
        i += 3
        continue

    elif S[i] == "A":
        num_a += 1
        l[i] = num_a
        i += 1
        continue
    
    if S[i] == "B" and num_a != 0:
        num_b += 1
        l[i] = num_b
        i += 1
        continue
      
    elif S[i]== "C" and  num_b != 0:
        num_c += 1
        l[i] = num_c
        i += 1

    else:        
        i +=1
        continue

for i in range(len(S)):
  if l[i] != -1 and l[i] <= num_c:
    l[i] = -1

print(l)

for i in range(len(S)):
  tmp = l[i]
    if l[i] != 1:
        print(S[i],end="")
