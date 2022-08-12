//armstrong number 371=(3*3*3)+(7*7*7)+(1*1*1)

#include<stdio.h>

int main(){
    int n,r,sum=0,temp;
    printf("enter n :  ");
    scanf("%d",&n);
    temp=n;
    
    while(n>0){
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum){
        printf("Armstrong number\n");
    }
    else{
         printf("Not an armstrong number\n");
    }
    return 0;

}