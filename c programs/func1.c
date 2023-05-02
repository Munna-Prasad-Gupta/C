#include <stdio.h>
void namaste();
void bonjour();
int main(){
    char ch;
    printf("enter your nationality\n");
    printf("if u r an indian enter 'i' if u are frech enter 'f'\n");
    scanf("%c",&ch);
    if (ch='i'){
        namaste();
    }else if(ch='f'){
        bonjour();
    }else{
        printf("wrong input by u to the program\n");
    }
}

void namaste(){
    printf("Namaste sir .....");
}
void  bonjour(){
    printf("Bonjour sir.....");
}