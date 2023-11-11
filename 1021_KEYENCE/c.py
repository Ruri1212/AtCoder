H,W = map(int,input().split())
L=[]
for i in range(H):
  tmp = input()
  for j in range(W):
    if tmp[j] == "#":
      L.append([i+1,j+1])

num_sensor = 0
ind = 0
sensor = []
while len(L)>0:
  sensor.append(L.pop(0))
  for j in sensor:
    for i in L:
      if max(abs(j[0]-i[0]), abs(j[1]-i[1])) == 1:
        sensor.append(L.pop(L.index(i)))

  for j in sensor:
    for i in L:
      if max(abs(j[0]-i[0]), abs(j[1]-i[1])) == 1:
        sensor.append(L.pop(L.index(i)))
  num_sensor += 1
print(num_sensor)

