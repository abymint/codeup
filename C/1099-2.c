#include<stdio.h>

int map[15][15]={'\0'};

void move(int x,int y){
    while(map[x][y]!=2){
		map[x][y]=9;
		if(map[x+1][y]!=1) x++;
		else if(map[x][y+1]!=1) y++;
		else break;
	}
	map[x][y]=9;
}

int main(){ 

	for(int i=1;i<=10;i++)
		for(int j=1;j<=10;j++)
			scanf("%d",&map[j][i]);
			
    move(2,2);
	
	for(int i=1;i<=10;i++){
		for(int j=1;j<=10;j++)
			printf("%d ",map[j][i]);
		printf("\n");
	}
	return 0;
}