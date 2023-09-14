map = []
for i in range(20):
    map.append([])
    for j in range(20):
        map[i].append(0)

for i in range(1,20):
    map[i]=input().split()

n = int(input())
for i in range(n):
    x,y = input().split()
    for j in range(20):
        if map[int(x)][j]!=1:
            map[int(x)][j]=1
        else:
            map[int(x)][j]=0
        
        if map[j][int(y)]!=1:
            map[j][int(y)]=1
        else:
            map[j][int(y)]=0

print("\n출력")

for i in range(1,20):
    for j in range(1,20):
        print(map[j][i],end=' ')
    print()
