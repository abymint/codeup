#include<stdio.h>
int main(){
    long long int x,y,sum;
    scanf("%lld",&x);
    for(y=1,sum=0;;y++){
        sum+=y;
        if(sum>=x)
            break;
    }
    printf("%lld",sum);
    return 0;
}