#include<stdio.h>
int main(){
    int a,b,m,n;
    scanf("%d %d",&a,&b);
    for(n=1;n<=a;n++)
        for(m=1;m<=b;m++)
            printf("%d %d\n",n,m);
    return 0;
}