#include<stdio.h>
#include<string.h>

typedef struct address{
    int house_no;
    int block;
    char city[100];
    char state[100];
}add;

void printinfo(add arr[],int l);

int main(){
    int n;
    printf("enter the number of person whose entry is to be done:\n");
    scanf("%d",&n);
    add person[n];
    for(int i=0;i<n;i++){
        printf("enter the info of a person %d\n",i);
        scanf("%d%d%s%s",&person[i].house_no,&person[i].block,&person[i].city,&person[i].state);
    }

    for (int i=0;i<n;i++){
        printinfo(person,i);
    }
    // add p1={36,5,"haralur","banglore"};
    // add p2={25,3,"patna","bihar"};
    // add p3={58,9,"gorakhpur","up"};
    // add p4={46,2,"oona","telangana"};
    // add p5={14,3,"likhita","munna"};


    // printinfo(p1);
    // printinfo(p2);
    // printinfo(p3);
    // printinfo(p4);
    // printinfo(p5);
}

void printinfo(add arr[],int l){

        printf("%d\t%d\t%s\t\t%s\n",arr[l].house_no,arr[l].block,arr[l].city,arr[l].state);
    
    // printf("house_no=%d\t",s1.house_no);
    // printf("block=%d\t",s1.block);
    // printf("city=%s\t",s1.city);
    // printf("state=%s\n",s1.state);
}

