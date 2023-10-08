#include<stdio.h>
int strl(char *st){
    char *ptr=st;
    int len =0;
    while(*ptr!='\0'){
        len++;
        ptr++;
    }
    return len;
}
int main(){
    char st[]= "Harry";
    int l = strl(st);
    printf("The length of this string is %d\n", l);
    return 0;
}