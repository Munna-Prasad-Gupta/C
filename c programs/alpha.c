#include<stdio.h>
void alpham(char *);
int main(){
    char ch='a';
    //printf("%p",&ch);
     alpham(&ch);
    return 0;
}

void alpham(char  *ch){
    char cha=*ch;
     while(cha <='z'){
        printf("%c\n",cha);
        cha++;
    }
}

// int main(){
//     int a=5;
//     int *p=&a;
//     printf("%d\n",*p);
//     printf("%p",&a);
// }

// int main(){
//     int a=4;
//     int *ptr=&a;
//     int ***pptr=&ptr;
//     printf("%d",***pptr);
// }