#include<stdio.h>
int main(){
    float price[3];
     int i; 
        printf("enter the price of three items:\n");
    scanf("%f%f%f",&price[0],&price[1],&price[2]);
    for(i=0;i<=2;i++){
        price[i]=price[i] +(0.18*price[i]);
         printf("the cost of item %d with gst is %f\n",i+1,price[i]);
    }
    // for(i=0;i<=2;i++){
    //     printf("the cost of item %d with gst is %f\n",i+1,price[i]);
    // }

}