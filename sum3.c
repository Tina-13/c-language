//sum of digits

#include<stdio.h>

int sumofDigits(int num);

int main(){
    int num,sum;
    printf("Enter any number :  ");
    scanf("%d",&num);

    sum=sumofDigits(num);

    printf("Sum of digits of %d is %d\n",num,sum);
    return 0;
}
int sumofDigits(int num){
    if(num==0){
        return 0;
    }
    return ((num%10)+ sumofDigits(num/10));

}