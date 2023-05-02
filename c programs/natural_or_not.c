#include<stdio.h>
int main(){
    float n;
    printf("enter any number");
    scanf("%f",&n);
    int a=n;
    if(n>0 && n==a){
        printf("this is a natural number");

    }else{
        printf("this is not a natural number");
    }
    return 0;

}