#include<stdio.h>

int main(){
    FILE *fptr;
    fptr=fopen("munnaslicing.c","r");
    if(fptr == NULL){
        printf("file does not exist");
    }else{
        fclose(fptr);
    }
    return 0;
}