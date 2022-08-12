//adult

#include<stdio.h>

int main(){
    int age;
    printf("enter age : ");
    scanf("%d",&age);
    if(age>18){
        printf("Adult\n");
        printf("They can vote\n");
        printf("They can drive\n");

    }
    else{
        printf("Not an adult\n");
    }
    return 0;
}