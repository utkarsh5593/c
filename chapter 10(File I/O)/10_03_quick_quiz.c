#include<stdio.h>

int main(){
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen("Harry.txt","r");
    if(ptr == NULL){
        printf("This file does not exist\n");
    }
    else{
    fscanf(ptr,"%d\n", &num);
    fscanf(ptr,"%d\n", &num2);
    fclose(ptr);
    printf("The value of num is %d\n", num);
    printf("The value of num is %d\n", num2);
    }
    return 0;
}