#include<stdio.h>

int main(){
    FILE *ptr1;
    FILE *ptr2;
    int c;
    ptr1 = fopen("pr05(a).txt","r");
    ptr2 = fopen("pr05(b).txt","w");
    fscanf(ptr1,"%d",&c);
    fprintf(ptr2,"%d",c*2);

    return 0;
}