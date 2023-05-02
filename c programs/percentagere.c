#include<stdio.h>
float per(float s,float m,float r );
int main(){
    float a,b,c;
    printf("Kindly enter the marks of three subjects:\n");
    scanf("%f%f%f",&a,&b,&c);
    printf("the percentage of marks entered is %f",per(a,b,c));

}

float per(float s,float m,float r){
       float p=(s+m+r)/300*100;
       return p;
    
    }
