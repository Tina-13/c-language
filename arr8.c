//multidimensional arrays,2 students marks of 3 subjects,2*3

#include<stdio.h>

int main(){
    int marks[2][3];
    marks[0][0]=90;
    marks[0][1]=89;
    marks[0][2]=78;
    marks[1][0]=69;
    marks[1][1]=78;
    marks[1][2]=79;

    printf("%d\n",marks[0][1]);
    return 0;


}