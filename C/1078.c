#include<stdio.h>
int main(){
    int sum=0,x,y;
    scanf("%d",&x);
    for(y=0;y<=x;y++){
        if(y%2==0) sum+=y;
    }
    printf("%d",sum);
    return 0;
}