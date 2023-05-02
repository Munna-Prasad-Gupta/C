#include<stdio.h>
int main(){
    int i=5;
    int *ptr=&i;
    int **pptr=&ptr;
    printf("%d=i\n",*pptr);
    int ***ppptr=&pptr;
    printf("%d=i\n",***ppptr); 
    printf("%d=i\n",&i);
     printf("%p=i\n",&i);
      printf("%u=i\n",&i);
     
    
    
}