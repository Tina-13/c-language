#include<stdio.h>

void _swap(int *a,int *b);

int main(){
    int a,b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    _swap(&a,&b);
    printf("a=%d & b=%d\n",a,b);
    return 0;
}
//call by reference
void _swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}