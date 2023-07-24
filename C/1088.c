#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
        if(b%3!=0)
            printf("%d ",b);
    return 0;
}