n = int(input())
s = int(0)
c = int(1)
while(True):
    s+=c
    c+=1
    if s>=n:
        break
print(s)