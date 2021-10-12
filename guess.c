#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    int guess,number;
    srand(time(0));  //To get different random numbers per time slot,If this is not given The random number generated is same for cerrtain time period
    number=rand()%20+1;   //To get a random number between 0 to 50,As any number upon dividing by 50 gives remainder less than 50 only And to avoid 0 ass random number we add +1
    printf("\n*****You have 5 chances to guess the number*****\n");
    for(int i=5;i>0;i--){
        printf("\nEnter your guess between 1 to 20 :");
        scanf("%d",&guess);
        if(number==guess){
            printf("\nYeah!! you guessed it right\n");
            break;
        }
        else if(guess>number){
            printf("\nThe number you guessed is higher\n");
        }
        else if(guess<number){
            printf("\nThe number you guessed is lesser\n");
        }
        printf("\nYou still have %d  chances\n",i-1);
    }
    printf("\nThe random number is : %d ",number);
    return 0;
}