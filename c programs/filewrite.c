#include<stdio.h>

int main(){
    FILE *fptr;
    fptr=fopen("likhita.txt","r");

    char ch;

    // EOF=END OF FILE

    ch = fgetc(fptr);
    while(ch!=EOF){

        printf("%c",ch);
        ch = fgetc(fptr);
    }
    

    fclose(fptr);
}

// int main(){
//     FILE *fptr;

//     // fptr=fopen("likhita.txt","w");// using write mode overwrites the file 
//     // but using append mode helps to write without removing the old contents of file
//     fptr=fopen("likhita.txt","a"); 

//     // char ch='A';
//     for(int i=0;i<=10;i++)
//     {fprintf(fptr,"%c",'I');
//     fprintf(fptr,"%c",'\t');
//     fprintf(fptr,"%c",'L');
//     fprintf(fptr,"%c",'O');
//     fprintf(fptr,"%c",'V');
//     fprintf(fptr,"%c",'E');
//     fprintf(fptr,"%c",'\t');
//     fprintf(fptr,"%c",'M');
//     fprintf(fptr,"%c",'U');
//     fprintf(fptr,"%c",'N');
//     fprintf(fptr,"%c",'N');
//     fprintf(fptr,"%c\n",'A');
//     }
//     }

