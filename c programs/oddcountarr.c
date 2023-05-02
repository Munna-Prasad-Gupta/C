#include<stdio.h>
void oddcount(int arrays[1000][1000],int n,int k);


int main(){
    int r,c;
    printf("enter the rows and columns of array:\n");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("enter the elements of %d row and %d column:\n",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    oddcount(arr,r,c);
}

void oddcount(int arrays[1000][1000],int n, int k){
    int count=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<k;j++){
                if (arrays[i][j] %2 != 0){
                    count = count + 1 ;
                    printf("the count of %d row and %d column is %d\n",i,j,count);
                }
        }


        
    }
     printf("the total odd elements in given array are %d",count);


}

