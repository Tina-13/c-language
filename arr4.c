//we can compare pointers & also subtract one from another

#include<stdio.h>

int main(){
    int age=24;
    int _age=25;
    int *ptr=&age;
    int *_ptr=&_age;
    
    printf("Difference=%u\n",ptr-_ptr);
    _ptr=&age;
    printf("Comparison%u\n",ptr==_ptr);//true=1&false=0
    return 0;
}