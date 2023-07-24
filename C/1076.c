#include<stdio.h>
int main(){
    char a,b = 'a';
    scanf("%c",&a);
    do{
        printf("%c ",b++);
    }while(b<=a);
    return 0;
}