#include<stdio.h>

int main(){
    int n,sum=0;
    printf("Enter n :  ");
    scanf("%d",&n);
    for(int j=n;j>=1;j--){
        sum+=j;
        printf("%d\n",j);
    }
    printf("Sum is %d\n",sum);
    return 0;
}