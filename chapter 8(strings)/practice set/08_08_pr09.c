#include<stdio.h>
int occurence(char st[],char c){
    char *ptr = st;
    int count=0;
    while(*ptr!='\0'){
        if(*ptr==c){
            count++;
           
        }
         ptr++;
    }
    return count;
}
int main(){
    char st[] ="Harry7777";
    int count =occurence(st,'8');
    if (count>0){
        printf("charcter is occur.");
    }
    else{
        printf("charcter is not occur.");
    }
    return 0;
}