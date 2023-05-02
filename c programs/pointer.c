#include<stdio.h>
int main(){
    int age=12;
    int *ptr=&age;
    int _age=*ptr;
    printf("the value at  addreess of age is %p\n",&age);
    printf("the value at  addreess of age is %p\n",ptr);
    printf("the value at  addreess of age is %p\n",&ptr);

    
}