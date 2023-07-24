#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int b=1;b<=a;b++){
        if(b%3!=0){
            printf("%d ",b);
        }
        else{
            printf("X ");
        }
    }
    return 0;
}