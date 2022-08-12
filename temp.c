//celsius to fahrenheit

#include<stdio.h>

float convertTemp(float celsius);

int main(){
    float far=convertTemp(0);
    printf("far is %f\n",far);
    return 0;
}
float convertTemp(float celsius){
    float far=(celsius*1.8)+32;
    return far;
}