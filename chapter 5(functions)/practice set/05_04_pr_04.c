#include<stdio.h>
int fibonachi(int a);

int main(){
    int a;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("The value of fibonachi series upto  %dth term is %d\n",a,fibonachi(a));
    return 0;
}

int fibonachi(int a){
     if(a==1){
        return 1;
     }
    else if(a==2){
        return 2;
     }
     else{
        return (a-1)+(a-2);
     }
}