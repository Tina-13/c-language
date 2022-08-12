#include<stdio.h>

int main(){

int n; 

float temp,sqt;

printf("Enter n : ");

scanf("%d",&n);

sqt=n/2;

temp=0;

while(sqt!=temp)

{

temp=sqt;

sqt=(n/temp+temp)/2;

}

printf("The square root of %d is %f\n",n,sqt);
return 0;
}