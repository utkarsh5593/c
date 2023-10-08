#include<stdio.h>
int positive(int *arr){
    int count=0;
    for(int i=0; i<8;i++){
        if(arr[i]>0){
            count++;
        }
    }
    return count;
}
int main(){
    int arr[8]={-1,-3,-5,0,3,56,4,54};
    printf("The number of positive arrays is %d.\n",positive(arr));
    return 0;
}