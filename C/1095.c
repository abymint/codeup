#include<stdio.h>
int main(){
    int a[10000]={},n,min=23;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
        if(min>=a[i]){
            min=a[i];
        }
    }
    printf("%d",min);
    return 0;
}