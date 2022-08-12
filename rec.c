#include<stdio.h>

int calcPercentage(int sci,int maths,int eng);
int main(){
    int sci=98;
    int maths=95;
    int eng=99;
    printf("Percentage is %d\n",calcPercentage(sci,maths,eng));
    return 0;

}

int calcPercentage(int sci,int maths,int eng){
    return((sci+maths+eng)/3);
}