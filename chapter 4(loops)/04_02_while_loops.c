#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    while(a<10){
        //a=11;
        //while(a>10){----->These two lines will lead to an infinte loop}
        printf("%d\n",a);
        a++;
    }
    return 0;
}