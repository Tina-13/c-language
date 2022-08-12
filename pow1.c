#include<stdio.h>

int calcPower(int base,int power);

int main(){
    int base,power;
    printf("Enter base : ");
    scanf("%d",&base);
    printf("Enter power : ");
    scanf("%d",&power);
    printf("%d\n",calcPower(base,power));
    return 0;

}
int calcPower(int base,int power){
    if(power!=0){
        return(base*calcPower(base,power-1));
    }else{
        return 1;
    }
}