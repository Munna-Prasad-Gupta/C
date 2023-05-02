#include<stdio.h>
 float munnapower (float a,float b);

 int main(){
    float x,y;
    printf("enter thee base number:\n");
    scanf("%f",&x);
    printf("enter the exponential of a number\n");
    scanf("%f",&y);
    munnapower(x,y);


 }

 float munnapower (float a,float b){
    float c =b;
    float power=1;
    while(b>0){
        
        
        power = power*a;
        b = b-1;
    }
    printf("the power of base %f with exopo %f is %f",a,c,power);
 }