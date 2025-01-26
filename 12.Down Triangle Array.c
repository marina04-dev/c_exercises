/* Malloc: Down Triangle Array */
// Lesson 12: Exercise 2, 3
#include <stdio.h>
#include <stdlib.h>

#define SIZE 20

int main() {
    int st_array[SIZE][SIZE];
    int **dyn_array;
    int N,i,j;
    
    srand(time(0));
    
    /* Static Array */
    do {
        printf("Enter the N in range 5 to 20: ");
        scanf("%d", &N);
        
        if (N<5 || N>20) {
            printf("Wrong Input (5...20). ");
        }
    } while (N<5 || N>20);
    
    /* Static Array's Filling */
    for (i=0; i<N; i++) {
        for (j=0; j<=i; j++) {
            st_array[i][j]=1+rand()%(9);
        }
        
        for (j=i+1; j<N; j++) {
            st_array[i][j]=0;
        }
    }
    
    /* Static Array Printing */
    for (i=0; i<N; i++) {
        for (j=0; j<N; j++) {
            printf("%d ", st_array[i][j]);
        }
        printf("\n");
    }
    
    /* Dynamic Array Initialization */
    dyn_array=(int **)malloc(N*sizeof(int *));
    if (!dyn_array) {
        printf("Error Allocating Memory!");
        exit(0);
    }
    
    for (i=0; i<N; i++) {
        dyn_array[i]=(int *)malloc((i+1)*sizeof(int));
        if (!dyn_array[i]) {
            printf("Error Allocating Memory!");
            exit(0);
        }
    }
    
    for (i=0; i<N; i++) {
        for (j=0; j<=i; j++) {
            dyn_array[i][j]=1+rand()%(9);
        }
    }
    
    /* Dynamic Array's Filling */
    for (i=0; i<N; i++) {
        for (j=0; j<=i; j++) {
            printf("%d ", dyn_array[i][j]);
        }
        
        for (j=i+1; j<N; j++) {
            printf("0 ");
        }
        printf("\n");
    }
    
    /* Copy From Static Array To Dynamic */
    for (i=0; i<N; i++) {
        for (j=0; j<=i; j++) {
            dyn_array[i][j]=st_array[i][j];
        }
    }
    
    /* Array's Printing */
    // Static Array Printing 
    printf("Static Array: \n");
    for (i=0; i<N; i++) {
        for (j=0; j<N; j++) {
            printf("%d ", st_array[i][j]);
        }
        printf("\n");
    }
    
    // Dynamic Array Printing 
    printf("Dynamic Array: \n");
    for (i=0; i<N; i++) {
        for (j=0; j<=i; j++) {
            printf("%d ", dyn_array[i][j]);
        }
        for (j=i+1; j<N; j++) {
            printf("0 ");
        }
        printf("\n");
    }
    
    for (i=0; i<N; i++) {
        free(dyn_array[i]);
    }
    free(dyn_array);
}
