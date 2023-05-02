#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
     ptr = (float *)malloc(5*sizeof(float));

    for(int i=0;i<5;i++){
        printf("enter the price of %d item\n",(i+1));
        scanf("%f",&ptr[i]);
    }
    
    for(int i=0;i<5;i++){
        printf(" the price of %d items are %f\n",(i+1),ptr[i]);
        // scanf("%f",ptr[i]);
    }
    
    }