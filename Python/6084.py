data_h,data_b,data_c,data_s = input().split()
sum = (int(data_h)*int(data_b)*int(data_c)*int(data_s))/(8*1024*1024)
print(format(sum,".1f"),"MB")