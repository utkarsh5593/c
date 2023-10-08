#include<stdio.h>

int main(){
    int phy,chem,maths;
    float total;
    printf("Enter physics marks:");
    scanf("%d",&phy);
     printf("Enter chemistry marks:");
    scanf("%d",&chem);
     printf("Enter maths marks:");
    scanf("%d",&maths);
    total=(phy +maths+ chem)/3;
    if((total<40)|| phy<33||chem<33||maths<33){
        printf("Your total percentage is %f and you are fail\n",total);
    }
    else{
        printf("Your total percentage is %f and you are pass\n",total);
    }
    return 0;
}