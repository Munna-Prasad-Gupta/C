#include<stdio.h>
int main(){
  int i,n;
  printf("enter a number");
  scanf("%d",&n);
   i=1;
   do{
    if(i==6){
    i++;
      continue;
    }else{
    printf("%d",i);
    i++;
    }

  }while(i<=n);
  return 0;
}