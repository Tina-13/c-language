#include<stdio.h>

int main(){
    int i,j,count,n;
    printf("Enter n :  ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        count=0;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                count++;
                break;
            }
        }
    if(count==0 && i!=1)
    printf("%d\n",i);
    }
    return 0;
}