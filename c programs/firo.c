#include<stdio.h>
int fibo(int a,int b,int n);
int main(){
    int x,y,z;
    printf("enter the first two terms and also enter the number of terms\n");
    scanf("%d%d%d",&x,&y,&z);
    printf("the terms of fibonacci series are\n %d\n%d\n",x,y);
    fibo(x,y,z);
    
    return 0;
    }



int fibo(int a,int b,int n){
    while ((n-2)!=0){
        int sum = a + b;
    printf("%d\n",sum);
    a=b;
    b=sum;
    n--;
    }
}