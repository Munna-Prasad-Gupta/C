#include<stdio.h>
int main(){
    int arr[5];
    int *ptr=arr;
    printf("%p",&arr);
    //arr=&arr[0];
    for(int i=0;i<5;i++){
        printf("%d:index\n",i);
        scanf(" %d:index",(ptr+i));
    }
    for(int i=0;i<5;i++){
        printf("%d:index:%d stored\n",i,*(ptr+i));
    }
}