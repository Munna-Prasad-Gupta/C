#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in array:\n");
    scanf("%d",&n);
    
    int a[n];
    int i,j;

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++){
        int c=1;
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                int k=j;
                while(k<n){
                a[k]=a[k+1];
                 k++;
                }
                c++;
            }
        }
            printf("the frequency of %d is%d\n",a[i],c);
    }
    return 0;
}