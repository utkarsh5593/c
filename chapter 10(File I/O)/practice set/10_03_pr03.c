#include<stdio.h>

int main(){
    FILE *ptr1;
    FILE *ptr2;
    char c;
    ptr2 = fopen("pr03(b).txt","w");
    ptr1 = fopen("pr03(a).txt","r");

    c = fgetc(ptr1);
    while(c!=EOF){
        fputc(c,ptr2);
        fputc(c,ptr2);
        c = fgetc(ptr1);
    }
    
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}