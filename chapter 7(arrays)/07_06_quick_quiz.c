#include<stdio.h>

int main(){
    // addition of a number to a pointer
    int i=3;
    int *p1=&i;
    printf("The value of i is %u\n",p1);
    p1++;
    printf("The value of i is %u\n\n",p1);

    // subtraction of a number from a pointer
    p1= p1-5;
    printf("The value of i is %u\n\n",p1);

    // subtraction of one pointer from another 
    int j=4;
    int *p2=&j;
    printf("The value of i is %u\n",p1);
    printf("The value of j is %u\n",p2);
    printf("The value of subtraction is %u\n\n",p2-p1);

    // comparision of two pointer varibles
    if(p1==p2){
        printf("pointers are equal\n");
    }
    else{
        printf("pointers are not equal\n");
    }

    return 0;
}