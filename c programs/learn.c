#include<stdio.h>
#include<conio.h>

void main(){
  float sum;
  int n;
  sum=0;
  for(n=1;n<=10;++n){
   sum=sum+1/(float)n;
 printf("%4d %1.1f\n",n,sum);
  }
 
}

