#include<stdio.h>
int main(){
    int x1,y1,n,i,j,k,l,d,x2,y2;
    int data[50][50]={};
    printf("\n입력 ---------------------------------\n\n");
    scanf("%d %d %d",&x1,&y1,&n);
    for(k=1;k<=n;k++){
        scanf("%d %d %d %d",&l,&d,&x2,&y2);
        if(d==1)
            for(i=1;i<=l;i++){
                data[x2][y2]=1;
                x2++;
            }
        else if(d==0)
            for(i=1;i<=l;i++){
                data[x2][y2]=1;
                y2++;
            }
    }
    printf("\n출력 ---------------------------------\n\n");
    for(i=1;i<=y1;i++){
        for(j=1;j<=x1;j++)
            printf("%d ",data[i][j]);
        printf("\n");
    }
    return 0;
}