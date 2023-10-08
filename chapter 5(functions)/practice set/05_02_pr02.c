#include<stdio.h>
float temprature(int c);

int main(){
    int c;
    printf("Enter a temp. value in celsius:");
    scanf("%d",&c);
    printf("The value in ferhanite is : %f",temprature(c));
    return 0;
}

float temprature(int c){
    float r;
    r=c*1.8+32.0;
    return r;
}
