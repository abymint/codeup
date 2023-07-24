#include<stdio.h>
int main(){
    int r,g,b,x,y,z;
    int c=0;
    scanf("%d %d %d",&x,&y,&z);
    for(r=0;r<x;r++)
        for(g=0;g<y;g++)
            for(b=0;b<z;b++){
                printf("%d %d %d\n",r,g,b);
                c++;
            }
    printf("%d",c);
    return 0;
}