#include<stdio.h>
int main(){
    int a;
    a:
    scanf("%d",&a);
    if(a!=0){
        printf("%d\n",a);
        goto a;
    }
    return 0;
}