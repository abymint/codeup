#include<stdio.h>
int main(){
    char data;
    scanf("%c",&data);
    switch(data){
        case 'A':
        printf("best!!!");
        break;
        case 'B':
        printf("good!!");
        break;
        case 'C':
        printf("run!");
        break;
        case 'D':
        printf("slowly~");
    }
    return 0;
}