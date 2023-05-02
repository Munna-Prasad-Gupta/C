#include<stdio.h>

float pow_div_num(float a,float b);
float munna(int x,int y);
int fact(int z);

int main(){
    int n,i,j;
    float sum=0;
    printf("enter number of terms:\n");
    scanf("%d",&n);
    {for(i=1;i<=n*2-1;i++){
        
        if(i%2 != 0){
            j=i-1;
            sum=sum+pow_div_num(i,j);
            printf("%f=sum\t",sum);
            
        }
    }}
    printf("%f=sum",sum);
    return 0;
}

float pow_div_num(float a,float b){
    float t=munna(a,b)/fact(b);
    return t;
}

float munna(int x, int y){
    int m=1;
    while(y!=0){
     m=m*x;
     y--;
    }
    return m;
}
int fact(int z){
    if(z != 0){
        z=z*fact(z-1);
    }else{
        z=1;
    }
    return z;
}