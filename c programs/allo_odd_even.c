#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,a;
    int *ptr;

    printf("enter the number of locations required:\n");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));

    for(int i=0;i<n;i++){
        printf("enter a number\n");
        scanf("%d",&a);
        if(a%2 != 0){
            ptr[i]=a;
        }
        
    }
    

    for(int i=0;i<n;i++){
        printf("%d\t",ptr[i]);
    }
    printf("\n");
    int l,b;
     printf("enter the total locations required\n");
     scanf("%d",&l);
     ptr=realloc(ptr,l);

     for(int i=0;i<l;i++){
        printf("enter a number:\n");
        scanf("%d",&b);
        if(b%2 == 0){
            ptr[i]=b;
        }
     }

     
    for(int i=0;i<l;i++){
        printf("%d\t",ptr[i]);
    }
}