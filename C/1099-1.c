#include<stdio.h>
#include<stdbool.h>
int main(){
	int map[15][15]={'\0'},x=2,y=2,temp;

	for(int i=1;i<=10;i++)
		for(int j=1;j<=10;j++)
			scanf("%d",&map[j][i]);

	while(true){
		if(map[x][y]==2){
			map[x][y]=9;
			break;
		}
		else map[x][y]=9;
		
		if(map[x+1][y]!=1) x++;
		else if(map[x][y+1]!=1) y++;
		else break;
	}
	
	for(int i=1;i<=10;i++){
		for(int j=1;j<=10;j++)
			printf("%d ",map[j][i]);
		printf("\n");
	}
	return 0;
}