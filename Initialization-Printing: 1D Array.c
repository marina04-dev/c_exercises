/* Initialization and Printing Of an One Dimension Array */
// lesson 7: exercise 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int main() {
    int array[SIZE];
    int N;
    int i;
    srand(time(NULL));
    
    while (1) {
        printf("Enter a number between 20 and 100 or 0 to Exit: ");
        scanf("%d",&N);
        if (N<20 || N>100) {
            printf("Wrong Input! Enter a number between 20 and 100!");
            continue;
        }
        else {
            for (i=0; i<N; i++) {
                array[i]=rand()%100;
            }
        }
        for (i=0; i<N; i++) {
            printf("\n%d ", array[i]);
        }
        break;
    }
}

