#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<=b){
        while(a<=b)
            printf("%d ",a++);
    }
    else{
        while(b<=a)
            printf("%d ",b++);
    }
    return 0;
}