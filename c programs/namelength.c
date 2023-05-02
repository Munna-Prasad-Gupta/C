#include<stdio.h>
void countstring(char *arr);

int main(){
    char *name;
    fgets(name,100,stdin);
    puts(name);
    countstring(name);

}

void countstring(char *arr){
    int count=0;
    for(int i=0;arr[i] !='\0';i++){
        printf("%c",arr[i]);
        count=count+1;
    }
    printf("the length of character array passed is %d",count);
}