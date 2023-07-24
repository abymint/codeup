#include<stdio.h>
int main(){
    int data[100]={},i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&data[i]);
    for(i=n;i>0;i--)
        printf("%d ",data[i]);
    return 0;
}