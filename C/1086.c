#include<stdio.h>
int main(){
    long long int a,b,c;
    double x;
    scanf("%lld %lld %lld",&a,&b,&c);
    x = a*b*c;
    printf("%.2lf MB",x/(8*1024*1024));
    return 0;
}