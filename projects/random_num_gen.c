#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess,nguesses=0;
    srand(time(0));
    number = rand()%100 +1;// Genarate a random number between 1 and 100
    // printf("The number is %d",number);
    //keep running the loop untill the number is guessed
    do{
        printf("Guess the number between 1 to100:");
        scanf("%d",&guess);
        if(guess>number){
            printf("Lower number please!\n");
        }
         else if(guess<number){
            printf("Higher number please!\n");
        }
        else{
            printf("You guessed it in %d attempts:\n",nguesses);
        }
        nguesses++;
    }while(guess!=number);
    return 0;
}