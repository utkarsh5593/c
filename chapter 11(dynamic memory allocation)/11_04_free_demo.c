#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr,*ptr2;
    ptr = (int *) malloc(6*sizeof(int));
    for(int i=0;i<6;i++){
        ptr2 = (int *) malloc(600*sizeof(int));
        printf("The value of %d element:",i+1);
        scanf("%d",&ptr[i]);
        free(ptr2);
    }
    for(int i=0;i<6;i++){
        printf("The value of %d element is: %d\n", i,ptr[i]);
    }
    return 0;
}