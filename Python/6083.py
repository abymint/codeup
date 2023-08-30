a,b,c = input().split()
count = 0
a = int(a);b = int(b);c = int(c)
for i in range(0,a):
    for j in range(0,b):
        for l in range(0,c):
            print(i,j,l)
            count+=1
print(count)