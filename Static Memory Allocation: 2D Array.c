/* Static Memory Allocation: 2D Array */
// lesson 7: exercise 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE1 100
#define SIZE2 200

int main() {
    int array[SIZE1][SIZE2];
    int M,N;
    int i,j;
    
    while (1) {
        printf("Enter the first dimension of the 2D array between 10 and 100: ");
        scanf("%d",&M);
        if (M<10 || M>100) {
            printf("Wrong Input! Enter a number between 10 and 100!");
            continue;
        }
        else {
            printf("Enter the second dimension of the 2D array between 10 and 100: ");
            scanf("%d",&N);
            if (N<10 || N>100) {
                printf("Wrong Input! Enter a number between 10 and 100!");
                continue;
            }
            else {
                for (i=0; i<M; i++) {
                    for (j=0; j<N; j++) {
                        array[i][j]=rand()%100;
                    }
                }
                for (i=0; i<M; i++) {
                    for (j=0; j<N; j++) {
                        printf("%d ",array[i][j]);
                    }
                }
                break;
            }
        }
    }
}

