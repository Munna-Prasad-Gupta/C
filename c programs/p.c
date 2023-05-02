#include<stdio.h>

float square_div_num(float a,float b);
int square(int x,int y);
int fact (int z);

int main(){
    int n,i,j,c;
    float sum=0;
    printf("enter number of terms:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i % 2 != 0){
        j=j-1;
         sum=sum+square_div_num(i,j);
         printf("%f\t",sum    );
        }
    }


printf("%f\n",sum );


return 0;
}

float square_div_num(float a,float b){
    a=square(a,b)/fact(b);

    return a;
}

int square(int x, int y){
    int p=1;
    while(y != 0){
        p=p*x;
        y--;
    }
    return p;
}

int fact(int z){
    if(z !=0){
        z=z*fact(z-1);

    }else{
        z=1;
    }
    return z;
}