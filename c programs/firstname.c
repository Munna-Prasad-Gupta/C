#include<stdio.h>
int main(){
    char firstname[50];
    char middlename[50];
    char lastname[50];
    printf("enter your firstname,middlename,lastname:\n");
    scanf("%s%s%s",&firstname,&middlename,&lastname);
    printf("%s\t%s\t%s\t",firstname,middlename,lastname);
}