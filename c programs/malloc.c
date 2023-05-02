#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
// to allocate memory to store integers
     ptr = (int *) malloc(5*sizeof(int));
     // to assign value in allocated space

     ptr[0]=123;
     ptr[1]=456;
     ptr[2]=12;
     ptr[3]=3;
     ptr[4]=56;

     for(int i=0;i<5;i++){
        printf("%d\t",ptr[i]);//here we not use *ptr to print value at address bcz here ptr is like an array
     }

}