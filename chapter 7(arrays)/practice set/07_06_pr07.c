#include<stdio.h>
void table(int *multable, int num){
    printf("The multiplication table of %d is :\n",num);
    for(int i=0; i<10;i++){
        multable[i]=num*(i+1);
    }
    for(int i=0; i<10; i++){
        printf("%d X %d = %d\n", num, i+1, multable[i]);
    }
    printf("\n\n");
}
int main(){
    int n;
    int multable[3][10];
    table(multable[0],2);
    table(multable[1],7);
    table(multable[2],9);
    return 0;
}