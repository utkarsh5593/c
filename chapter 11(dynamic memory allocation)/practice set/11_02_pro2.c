#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int *) calloc(6 ,sizeof(int));
    for(int i=0;i<6;i++){
        printf("The value of %d element:",i+1);
        scanf("%d",&ptr[i]);
    }
    return 0;
}