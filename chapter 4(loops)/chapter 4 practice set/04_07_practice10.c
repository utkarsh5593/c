#include<stdio.h>

int main(){
    // prime Numbers= divisible by itself and 1
    // this is not efficient problem
    int n,i,p=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for (i=2;i<n;i++){
        if(n%i==0){
           p=1;
            break;
        }
    }
if(p==0){
printf("This is a  prime number");
}
else{
    printf("This is not a prime number");
}
    return 0;
}