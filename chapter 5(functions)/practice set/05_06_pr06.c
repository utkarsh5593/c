#include<stdio.h>
int sum(int a);

int main(){
     int a;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("The sum of first %d natural number is : %d",a,sum(a));
    return 0;
}

int sum(int a){
    if( a==1){
        return 1;
    }
    else{
        return a+sum(a-1);
    }
}
