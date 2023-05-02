#include<stdio.h>
int digitsum(int n);
int main(){
    int b;
    printf("enter the number :\n");
    scanf("%d",&b);
    int y=digitsum(b);
    printf("the sum of %d is %d",b,y);
    
    return 0;

}

int digitsum(int n){
    int sum=0;
    int a=n;
    
        while (n>0){
            int last=n%10;
            sum=sum+last;
            n=n/10;
        
    }
   
return sum;    
}