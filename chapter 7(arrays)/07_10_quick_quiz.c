#include<stdio.h>

int main(){
    int a = 3;
    int b = 3;

    int marks [3][3];
    printf("Enter the value in 3X3 matrix form:\n");
    for(int i=0; i<3; i++){
        for( int j=0; j<3; j++){
            printf("%dth row and %dth coloumn", i+1,j+1);
            scanf("%d", &marks [i][j]);
        }
      
    }

    for(int i=0; i<3; i++){
        for( int j=0; j<3; j++){
            printf("%d  ",marks [i][j]);
        }
            printf("\n");
    }
    return 0;
}