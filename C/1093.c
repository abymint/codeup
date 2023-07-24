#include<stdio.h>
int main(){
    int a[100]={};
    int n,t,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&t);
        a[t]+=1;
    }
    for(i=1;i<=23;i++){
        printf("%d ",a[i]);
    }
    return 0;
}