#include<stdio.h>
void check(int a, int b,int *max,int *min);
int main(){
    int x=3,y=3,max,min;
    check( x,y,&max,&min);
     printf("max =%d\n,min =%d\n",max,min);
     printf("%d\n%d\n",&max,&min);
}

void check(int a,int b,int *max,int *min){
    if( a> b){
        *max=a;
        *min=b;
       
    }else if(b>a){
        *max=b;
        *min=a;    
    }else {
        printf("both integers have same value");
    }
}