/* Malloc: 2D Array Memory's Saved Calculation */
// Lesson 12: Exercise 1
#include <stdio.h>
#include <stdlib.h>

int main() {
    int **p; // Double Pointer For 2D Array  
    int i,j,M,N;
    
    /* Array's Length Reading From Input */
    printf("Enter the array's 1st dimension - rows: ");
    scanf("%d", &M);
    printf("Enter the array's 2nd dimension - columns: ");
    scanf("%d", &N);
    
    /* Dynamic Memory Allocation */
    p=malloc(sizeof(int*)*M);
    if (!p) {
        printf("Error Allocating Memory!");
        exit(0);
    }
    
    for (i=0; i<M; i++) {
        p[i]=malloc(sizeof(int)*N);
        if (!p[i]) {
            printf("Error Allocating Memory!");
            exit(0);
        }
    }
    
    /* Calculation of the bytes that were used to save the array */
    printf("Space that was allocated dynamically is: %d+%d+%d=%d",
    M*N*sizeof(double),M*sizeof(double *),sizeof(double **),
    M*N*sizeof(double)+M*sizeof(double *)+sizeof(double **));
    
    /* Memory Free */
    for (i=0; i<M; i++) {
        free (p[i]);
    }
    free(p);
}
