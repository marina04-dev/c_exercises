/* Initialization and Printing Of an Two Dimensions Array */
// lesson 7: exercise 2
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int array[5][8];
    int i,j;
    
    for (i=0; i<5; i++) {
        for (j=0; j<8; j++) {
            array[i][j]=rand()%200;
        }
    }
    
    
    for (i=0; i<5; i++) {
        for (j=0; j<8; j++) {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
}

