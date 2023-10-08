#include<stdio.h>

int main(){
    int a=8,i,s,q=0;
    for( i=1;i<=10;i++){
        s=a*i;
        q+=s;
    }
    printf("\n\nThe sum of the number occuring in the multiplication of 8 :%d\n",q);
    return 0;
}