#include<stdio.h>
int main(){
    int n,p=1;
    printf("enter a number:\n");
    scanf("%d",&n);
    int a=n;
    while(n!=0){
        p=p*n;
        n--;

    }
    printf("The factorial of %d is %d",a,p);
}