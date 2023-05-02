#include<stdio.h>
int main(){
    int i=5;
    for(i;i<=50;i++){
          if(i%2!=0){
            printf("%d\t",i);
          }else{
            continue;
          }
    }
}