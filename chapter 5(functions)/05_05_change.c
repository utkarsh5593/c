#include<stdio.h>
int change( int a);

int main(){
    int b=344;
    printf("The value of b before change is %d\n",b);
    change(b);
    printf("The value of b before change is %d\n", b);// b should be change(b)
    return 0;
}

int change(int b){
    b=77;
    // return b;
}