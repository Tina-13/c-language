//swapping two numbers

#include<stdio.h>

void swap(int a,int b);

int main(){
    int a;
    printf("enter a : ");
    scanf("%d",&a);
    int b;
    printf("enter b : ");
    scanf("%d",&b);
    swap(a,b);
    printf("a=%d & b=%d\n",a,b);
    return 0;
}
//call by value
void swap(int a ,int b){
    int t=a;
    a=b;
    b=t;
    printf("a=%d & b=%d\n",a,b);
}