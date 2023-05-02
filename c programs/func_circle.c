#include<stdio.h>
float circle(float r);
float rectangle(float l,float b);
float square(float a);
float main(){
    float r,l,b,a;
    printf("enterr the radius of circle\n");
    scanf("%f",&r);
     printf("enter the length and breadth of rectangle\n");
     scanf("%f%f",&l,&b);
     printf("enter the lenght or breadth of square\n");
     scanf("%f",&a);
     circle(r);
     rectangle(l,b);
     square(a);
     return 0;
}

float circle(float r){
    float area=3.14*r;
    printf("the area of circle is %f\n",area);
}
float rectangle(float l,float b){
    float area=l*b;
    printf("the area of rectangle is %f\n   ",area);
}
float square(float a){
    float area=a*a;
    printf("the area of square is %f\n",area);
}