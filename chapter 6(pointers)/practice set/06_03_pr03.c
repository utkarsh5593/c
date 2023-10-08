#include<stdio.h>
int mult(int *a){
    *a=(*a)*10;
}
int main(){
    int a=7;
    mult(&a);
    printf("the multiplication of a by 10 is :%d\n",a);

    return 0;
}