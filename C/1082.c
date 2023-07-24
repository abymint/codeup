#include<stdio.h>
int main(){
    int a,b,m;
    scanf("%X",&a);
    for(b=1;b<=15;b++){
        printf("%X*%X=%X\n",a,b,a*b);
    }
}