a,x,n = input().split()

a = int(a)
x = int(x)
n = int(n)

for i in range(1,n):
    a*=x
print(a)