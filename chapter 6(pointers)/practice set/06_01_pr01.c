#include<stdio.h>

int main(){
    int a=6;
    int *ptr=&a;
    printf("The address of variable a is :%u\n",&a);
    printf("The address of variable a is :%u\n",ptr);
    printf("The value of variable a is :%u\n",*ptr);
    return 0;
}