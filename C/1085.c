#include<stdio.h>
int main(){
    int a,b,c,d;
    double x;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    x = a*b*c*d;
    printf("%.1lf MB",x/(8*1024*1024));
    return 0;
}