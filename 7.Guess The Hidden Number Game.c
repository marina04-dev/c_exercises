/* Guess The Number Game */
// lesson 7: exercise 4
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int hidden;
    int i;
    int tries=0;
    
    hidden=1+rand()%101;
    while (tries<=3) {
        printf("\nEnter the number you guessed: ");
        scanf("%d",&i);
        
        if (hidden==i) {
            printf("You found it! You won!");
            break;
        }
        if (tries==3) {
            printf("Sorry! You ran out of tries!");
            break;
        }
        else if(hidden>i) {
            printf("Too low! Enter a bigger number!");
            tries++;
            continue;
        }
        else if(hidden<i) {
            printf("Too big! Enter a smaller number!");
            tries++;
            continue;
        }
    }
}
