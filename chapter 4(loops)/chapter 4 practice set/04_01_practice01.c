#include<stdio.h>

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("The multipication table of %d :\n",n);
    for(int i=1;i<11;i++){
    printf(" %d X %d =%d\n",n,i,n*i);
    }
    return 0;
}