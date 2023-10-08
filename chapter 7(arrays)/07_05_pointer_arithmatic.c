#include<stdio.h>

int main(){
    // integer
    // int i=34;
    // int *ptr =&i;
    // printf("The value of i is %u\n",ptr);
    // // ptr= ptr+2; add 8 byte
    // ptr++;
    // printf("The value of i is %u\n",ptr);


    //character
    // char c=34;
    // char *ptr =&c;
    // printf("The value of i is %u\n",ptr);
    // // ptr= ptr+2; add 2 byte
    // ptr++;
    // ptr++;
    // // ptr++;
    // // ptr++;
    // printf("The value of i is %u\n",ptr);

    //float
    float f=34;
    float *ptr =&f;
    printf("The value of i is %u\n",ptr);
    ptr++;
    // ptr++;// add 4 byte
    printf("The value of i is %u\n",ptr);

    return 0;
}