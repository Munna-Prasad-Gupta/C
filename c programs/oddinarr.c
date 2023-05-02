#include<stdio.h>
int oddcount(int arr[100][100],int n,int k){
    int count=0;
    int i,j;
    for( i=0;i<n;i++){
        for( j=0;j<k;j++){
            if(arr[i][j] % 2 != 0){
                count++;
                continue;
            }
        }
        printf("%d",i);
    }
    // printf("the count of odd elements is %d",count);
    return count;
}

int main(){
    int r,c;
    printf("enter the number of rows and columns respectively in two dimensional array\n");
    scanf("%d%d",&r,&c);
    int marks[r][c];
    int result;
    for(int i=0;i<r;i++){
       
        for(int j=0;j<c;j++){
           
            printf("enter the elements of %d and %d::-->",i,j);
            scanf("%d",&marks[i][j]);
        }
    }
    
    for(int i=0;i<r;i++){
        printf("\n");
        for(int j=0;j<c;j++){
           printf("%d\t", marks[i][j]);
            
        }
}
result = oddcount(marks,r,c);
printf("the count is: %d", result);
return 0;
}