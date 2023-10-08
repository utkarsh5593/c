#include<stdio.h>
int mult(int a){
    a = a * 10;
    return a;
}
int main(){
    int a=7;
    printf("The multiplication of a by 10 is :%d\n",mult(a));
    return 0;
}