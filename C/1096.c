#include<stdio.h>
int main(){
    int n,i,j,x,y;
    int a[100][100];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d",&x,&y);
        a[x][y]=1;
    }

    printf("\n출력 ---------------------------------\n\n");
    for(i=1;i<=19;i++){
        for(j=1;j<=19;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}