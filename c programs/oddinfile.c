#include<stdio.h>

int main(){
    FILE *fptr;
    fptr=fopen("oddfile.txt","w");
    int n;
    int a,i;
    printf("enter the term upto which odd has to be fetched in file\n");
    scanf("%d",&n);
    for( i=1;i<=n;i++){
        if(i%2 != 0){
            fprintf(fptr,"%d\t",i);
        }
    }

    fclose(fptr);
    FILE *fop;
    fop=fopen("oddfile.txt","r");

    for(i=0;i<n;i++){
        fscanf(fptr,"%d",&i);
        printf("%d\t",i);
    }
}