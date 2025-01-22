/* Init_array + Print_array + Max_array: function */
// lesson 8: exercise 4
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10
void init_array(int *array, int n, int a, int b);
void print_array(int *array, int n);
int max_array(int *array, int n);


int main() {
    int array[N];
    int a, b;
    a=2; b=12;
    int i;
    int max;
    
    init_array(array, N, a, b);
    print_array(array, N);
    max = max_array(array, N);
    printf("\nThe max of the array's values is: %d", max);
    
}

void init_array(int *array, int n, int a, int b) {
    srand(time(NULL));
    int i;
    
    for (i=0; i<n; i++) {
        array[i]=a+rand()%(b-a+1);
    }

}

void print_array(int *array, int n) {
    int i;
    for (i=0; i<N; i++) {
        printf("%d ", array[i]);
    }
}

int max_array(int *array, int n) {
    int i;
    int max;
    max=array[0];
    for (i=1; i<n+1; i++) {
        if (array[i]>max) {
            max = array[i];
        }
        else {
            continue;
        }
    }
    return max;
}
