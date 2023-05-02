#include<stdio.h>
int main(){
    int n1,n2,lcm;
    
    printf("enter any two numbers");
    scanf("%d%d",&n1,&n2);
    
    if(n1>n2){
        lcm=n1;
    }else{
        lcm=n2;}
    while(lcm%n1!=0 || lcm%n2!=0){
        lcm=lcm+1;
    }
    printf("the lcm of two numbers is %d",lcm);
    return 0;

    }