#include<stdio.h>

int main(){
    FILE *fptr;
fptr= fopen("munna.txt","r");
char ch;
// for(int i=0;ch!='\n';){
//     fscanf(fptr,"%c",&ch);
//     printf("%c",ch);
// }
  fscanf(fptr,"%c",&ch);
    printf("%c",ch);
    fscanf(fptr,"%c",&ch);
    printf("%c",ch);
    fscanf(fptr,"%c",&ch);
    printf("%c",ch);
    fscanf(fptr,"%c",&ch);
    printf("%c",ch);
    fscanf(fptr,"%c",&ch);
    printf("%c",ch);
    fscanf(fptr,"%c",&ch);
    printf("%c",ch);
    fscanf(fptr,"%c",&ch);
    printf("%c",ch);
    fscanf(fptr,"%c",&ch);
    printf("%c",ch);
}

