#include<stdio.h>
#include<math.h>

int munna(int x,int y);


int main(){
    int a,c=0,rem,sum=0;
    printf("enter the num:\n");
    scanf("%d",&a);
    int b=a,d=a;
     while(d>0){
        c=c+1;
        d=d/10;
     }
      printf("%d=c\t",c);
      printf("%d=d\t",d);
      printf("%d=b\t",b);
     while(b>0){
        rem=b%10;
        sum=sum + munna(rem,c);
        printf("%d=sum\t",sum);
        b=b/10;
        printf("%d=b\n",b);
     }
     printf("%d=b\t",b);
      printf("%d=sum\t",sum);
     if(sum == a)
        printf("armstrong\n");
     else
        printf("not armstrong");  

        return 0;

}

int munna(int x,int y){
    int add=1;
    while(y>0){
     add=add*x;
     printf("%d=add\t",add);
     y--;

    }
     return add;
}
