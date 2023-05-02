#include<stdio.h>
float convert(float x);
int main(){
    float c,f;
    printf("enter the temperatre in celcius:\n");
    scanf("%f",&c);
    printf("the temperature in fahrenheit is %f",convert(c));

}

float convert(float x){
   float fahr=x * 180/100 +32;
   return fahr;
}