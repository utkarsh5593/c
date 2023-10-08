#include<stdio.h>
#include<string.h>

int main(){
    char st1[34];
    char st2[34],c;
    int i =0;

    printf("Enter the value of first string\n");
    scanf("%s", st1); 
    printf("Enter the value of second string character by character:");
    
    while(i<2*strlen(st1)){ 
        scanf("%c",&c); 
        st2[i]=c;
        i++;
    }
    st2[i]='\0';
    printf("The value of st1 is %s\n", st1);
    printf("The value of st2 is :");
    printf("\n%s\n",st2);
    printf("strcmp for these strings returns %d", strcmp(st1, st2));
    
    return 0;
}// not run properly