#include<stdio.h>

int main(){
    FILE *ptr;
    int name1,name2;
    char n1[20],n2[20],c1,c2;
    ptr = fopen("pr04.txt","w");
    printf("Enter the first name of employee:");
    scanf("%s",n1);
    printf("Enter the salary of first person:");
    scanf("%d",&name1);

    printf("Enter the second name of employee:");
    scanf("%s",n2);
    printf("Enter the salary of second person:");
    scanf("%d",&name2);
    fprintf(ptr,"%s,%d\n%s,%d\n",n1,name1,n2,name2);
    return 0;
}