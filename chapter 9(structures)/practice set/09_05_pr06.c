#include<stdio.h>
typedef struct complex{
    int real;
    int img;
}comp;

void display(comp c){
    printf("The value of complex number is reprsented by %d+i(%d)\n",c.real,c.img);
}
int main(){ 
    comp cnums[5];

    for(int i=0;i<5;i++){
        printf("Enter the real value for %d num\n",i+1);
        scanf("%d",&cnums[i].real);

        printf("Enter the complex value for %d num\n",i+1);
        scanf("%d",&cnums[i].img);
    }
    for(int i=0;i<5;i++){
        display(cnums[i]);
    }
    return 0;
}