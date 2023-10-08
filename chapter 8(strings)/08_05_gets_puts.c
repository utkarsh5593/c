#include<stdio.h>

int main(){
    char s[34];
    printf("Enter your name:");
    gets(s);
    printf("Your name is ");
    // or can be printed by printf("Your name is %s\n",s);
    puts(s);
    return 0;
}