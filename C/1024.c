#include<stdio.h>
int main(){
    char data[100];
    int a;
    scanf("%s",&data);
    for(a=0; data[a]!='\0'; a++){
        printf("\'%c\'\n",data[a]);
    }
    return 0;
}