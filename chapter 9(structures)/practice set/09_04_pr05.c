#include<stdio.h>
typedef struct complex{
    float real;
    float img;
}cmp;
int main(){ 
    cmp c1;
    c1.real=212.45;
    c1.img=32.45;
    printf("the complex number is representing by %f+i(%f).",c1.real,c1.img);
    return 0;
}