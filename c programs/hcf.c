#include<stdio.h>
int main(){
    int hcf,i,a,b;
    printf("enter any two number\n");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a||i<=b;i++){
        if(a%i==0 && b%i==0){
           hcf=i;
        }
    }
    printf("the hcf of two number %d,%d is %d",a,b,hcf);

    
}