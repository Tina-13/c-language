#include<stdio.h>

int main(){
    int marks[3]; //size
    printf("Enter Phy : ");
    scanf("%d",&marks[0]);
    printf("Enter Chem :  ");
    scanf("%d",&marks[1]);
    printf("Enter Maths : ");
    scanf("%d",&marks[2]);

    printf("Phy=%d,Chem=%d,Maths=%d\n",marks[0],marks[1],marks[2]);

    return 0;
}