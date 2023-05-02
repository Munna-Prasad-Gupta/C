#include<stdio.h>
#include<string.h>

typedef struct bank{
    char firstname[100];
    char middlename[100];
    char lastname[100];
    int acc_no;
}bank;


void printdetails(bank arr[],int a);
int main(){
    int n;
    bank details[100];
    printf("enter the number of enteries to be done:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the data of %d bank account holder such as firstname middlename lastname accoutnumber\n",i);
        scanf("%s%s%s%d",&details[i].firstname,&details[i].middlename,&details[i].lastname,&details[i].acc_no);
        // // fgets(details,100,stdin);
        // printf("enter the account number\n");
        // scanf("%d",&details[i].acc_no);
    }
    for(int i=0;i<n;i++){
    printdetails(details,i);
    }
}

void printdetails(bank arr[],int a){
    // puts(arr);
    printf("%s''%s''%s\t%d\n",arr[a].firstname,arr[a].middlename,arr[a].lastname,arr[a].acc_no);
}