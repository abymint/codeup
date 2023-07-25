#include<stdio.h>
int main(){
    char a,b;
    scanf("%c %c",&a,&b);
    while(a<=b){
        printf("%c ",a++);
    }
    return 0;
}