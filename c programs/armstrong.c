#include <stdio.h>
int r,num,sum=0,a;
int main(){
    
    //to check whether it is armstrong number or not
     printf("Enter a number: \n");
     scanf("%d",&num);
     a=num;
     printf("%d",a);
     while(num>0){
       r=num%10;
       sum=sum+r*r*r;
       num=num/10;
     }
     if(a==sum){
        printf("it is an armstrong number");
     }else{
        printf("it is not an armstrong number");
     }
     return 0;
  
}