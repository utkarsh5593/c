#include<stdio.h>
#include<string.h>

void strc(char *st2, char *st1){
    int i=0;
    while(i<strlen(st1)){
        st2[i]=st1[i];
        i++;
    }
    st2[i]='\0';
}
int main(){
    char st1[32],st2[32];
    printf("Enter a string: ");
    scanf("%s",st1);
    printf("The st1 string is:%s\n",st1);
    strc(st2,st1);
    printf("The st2 string is:%s\n",st2);

    return 0;
}