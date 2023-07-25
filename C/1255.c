#include<stdio.h>
int main(){
    double a,b;
    scanf("%lf %lf",&a,&b);
    if(a<=b){
        while(a<=b){
            printf("%.2lf ",a);
            a+=0.01;
        }
    }
    else{
        while(b<=a){
            printf("%.2lf ",b);
            a+=0.01;
        }
    }
}