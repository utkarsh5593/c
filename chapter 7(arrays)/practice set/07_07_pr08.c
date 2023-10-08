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
    printf("How many number do you want to find multiplication of them.");
    scanf("%d",&n);
    int multable[n][10],num[n];
    for(int i=0; i<n;i++){
        scanf("%d",& num[i]);
    }
    for(int i=0; i<n; i++){
        table(multable[i],num[i]);
    }
    return 0;
}