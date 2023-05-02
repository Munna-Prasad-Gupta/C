#include<stdio.h>
void spa(int a,int b,int c,int *sum,int *product,int *av);
int main(){
    int a=3,b=5,c=9,sum,product,av;
    spa(a,b,c,&sum,&product,&av);
     printf("the sum=%d\n the product=%d\n the average=%d\n",sum,product,av);
     int z;
     printf("%d",z);

}
void spa(int a,int b,int c,int *sum,int *product,int *av){
     *sum=a + b +c;
     *product= a*b*c;
     *av=(a + b +c)/3;
    printf("the sum=%d\n the product=%d\n the average=%d\n",*sum,*product,*av);
}