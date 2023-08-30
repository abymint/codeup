n = int(input())
a = input().split()
k = 100

for i in range(n):
    a[i] = int(a[i])
    if(a[i]<k):
        k = a[i]
    
print(k)