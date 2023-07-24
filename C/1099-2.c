#include<stdio.h>
int main(){\
    // 변수 선언
    int x=2,y=2,data[20][20]={};
    // 입력
    printf("\n입력 ---------------------------------\n\n");
    for(int i=1;i<=10;i++)
        for(int j=1;j<=10;j++)
            scanf("%d",&data[j][i]);
    // 처리1
    if(data[x][y]==0) data[x][y]=9;
    while(data[x+1][y]!=2&&data[x][y+1]!=2){
        if(data[x+1][y]==0) data[++x][y]=9;
        else if(data[x][y+1]==0) data[x][++y]=9;
        // 진행 과정 출력
        /*printf("\n진행 과정 ----------------------------\n\n");
        for(int i=1;i<=10;i++){
			for(int j=1;j<=10;j++){
                printf("%d ",data[j][i]);
            }
        	printf("\n");
        }*/
	}
    // 처리2
	if(data[x+1][y]==2)
		data[++x][y]=9;
	// 출력
    else data[x][++y]=9; 
    printf("\n출력 ---------------------------------\n\n");
	for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++)
            printf("%d ",data[j][i]);
        printf("\n");
    }
    return 0;
}