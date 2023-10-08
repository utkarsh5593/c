#include<stdio.h>

int main(){
    int i=5;
    printf("The value after i++ is %d\n",++i);
    i++; //---> pehle print fir increment
    ++i; //---> pehle increment fir print
    printf("The value after i is %d",i);
    i+=10;//--> Increment i by 10
    printf("The value after i is %d",i);
    return 0;
}