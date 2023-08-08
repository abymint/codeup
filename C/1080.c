#include<stdio.h>
#include<stdbool.h>
int main(){
    int sum=0,i=0,num;
    scanf("%d",&num);
    while(true){
        i++;
        sum+=i;
        if(sum>=num) break;
    }
    printf("%d",i);
    return 0;
}
// #include<stdio.h>
// #include<stdbool.h>
// int main(){
//     int sum=0,i=0,num;
//     scanf("%d",&num);
//     while(sum<num){
//         i++;
//         sum+=i;
//     }
//     printf("%d",i);
//     return 0;
// }
