#include<stdio.h>
int main(){
    FILE *fptr=fopen("onlysum.txt","w");
    int n;
    printf("enter the  number of elements :\n");
    scanf("%d",&n);
    //while using fprintf in write mode we can only use i as it contains varying value
    for(int i=0;i<n;i++){
        
        fprintf(fptr,"%d\t",i);
    }
    fclose(fptr);
//but in read mode we should use other int variable as it prints the value of i
    FILE *open;
    int b;
    open=fopen("onlysum.txt","r");
    for(int i=0;i<n;i++){
        fscanf(open,"%d",&b);
        printf("%d\t",b);
    }
    printf("\n");
   
    fclose(open);

    FILE *sum;
    int sum_n=0;
    int c;
    sum=fopen("onlysum.txt","w");
    for(int i=0;i<n;i++){
        fscanf(sum,"%d",&i);
        sum_n=sum_n+i;
        printf("the value stored finaly is %d\n",sum_n);
    }
        fprintf(sum,"%d",sum_n);
    fclose(sum);
}