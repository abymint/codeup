#include<stdio.h>
int main(){
    int time,a;
    scanf("%d",&time);
    reget:
    scanf("%d",&a);
    printf("%d\n",a);
    if(--time!=0) goto reget;
    return 0;
}