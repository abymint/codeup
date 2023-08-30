data_r,data_g,data_b = input().split()
sum = (int(data_r)*int(data_g)*int(data_b))/(8*1024*1024)
print(format(sum,".2f"),"MB")