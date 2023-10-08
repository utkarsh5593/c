#include<stdio.h>

int main(){
    FILE *ptr;
    int a,b,c;
    ptr = fopen("pr01.txt","r");
    fscanf(ptr, "%d %d %d",&a,&b,&c);
    printf("The values are a=%d, b=%d and c=%d ",a,b,c);
    return 0;
}