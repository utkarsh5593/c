#include<stdio.h>
struct employee{
    int code;
};
int main(){
    struct employee e1,e2;
    struct employee *ptr;
    ptr=&e1;
    ptr->code=101;
    e2.code= 101;
    printf("%d\n",e1.code);
    printf("%d\n",e2.code);
    return 0;
}