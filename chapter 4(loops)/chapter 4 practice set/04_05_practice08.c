#include<stdio.h>

int main(){
    int a,i,f=1;
    printf("Enter a number:");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        f*=i;
    }
    printf("The factorial of %d is:%d",a,f);
    return 0;
}