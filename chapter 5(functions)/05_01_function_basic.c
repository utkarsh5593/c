#include<stdio.h>
void display();// Function prototype

int main(){
    printf("Initializing display function\n");
    display();// function call
    printf("Display function finished its work\n");
    return 0;
}

//Function definition 
void display(){
    printf("This is display\n");
}