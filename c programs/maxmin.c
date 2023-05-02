#include<stdio.h>

int main(){
    int a,b;
    char var;
    printf("Enter any two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("enter m if max and n if min:\n");
    scanf(" %c",&var);

    switch(var){
        case 'm':if(a>b){
            printf("%d is the max number\n",a);
            }else
             printf("%d is max",b);
             break;

        case 'n':if(a<b)
            printf("%d is smallest",a);
            else
            printf("%d is smallest",b);
           break;
    }

}