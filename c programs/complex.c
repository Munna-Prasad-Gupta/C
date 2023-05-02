#include<stdio.h>

typedef struct complex{
    int real;
    int imaginary;
}com;

void printcnumbers(com arr[],int a);

int main(){
    int n;
    com cnumbers[100];
    printf("enter the number of complex numbers to be added\n ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter the %d complex number\n",i);
        scanf("%d%d",&cnumbers[i].real,&cnumbers[i].imaginary);
    }
    for(int i=0;i<n;i++){
    printcnumbers(cnumbers,i);
    }
}

void printcnumbers(com arr[],int a){
    com *ptr=&arr[a];
    printf("%d=real\t%d=imaginary\n",ptr->real,ptr->imaginary);
}