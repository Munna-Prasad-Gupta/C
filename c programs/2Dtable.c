#include<stdio.h>
void storetable(int arr[10][10],int m,int f,int num);


int main(){
    //  int r,c,n,a,b;
    //  printf("enter the number of rows and columns of array:\n");
    //  scanf("%d%d",&r,&c);
     int table[2][10];
    //  int n;
    //  printf("enter the number whose table is required:\n");
    //  scanf("%d",&n);
    //  printf("enter the row and size of column in which the table is to be stored\n");
    //  scanf("%d%d",&a,&b);

      storetable(table,0,10,2);
        for (int i=0;i<10;i++){
        printf("%d\t",table[0][i]);
    } 

    
}

void storetable(int arr[10][10],int m,int f,int num){
    for (int i=0;i<f;i++){
        arr[m][f]=num*(i+1);
    }
}