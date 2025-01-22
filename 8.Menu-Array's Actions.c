/* Menu - Program: Init_array + Print_array + Max_array + Min_array: function */
// lesson 8: exercise 5 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100
void init_array(int *array, int n, int a, int b);
void print_array(int *array, int n);
int max_array(int *array, int n);
int min_array(int *array, int n);


int main() {
    int array[SIZE];
    int a, b, choice, N;
    choice=1;
    while (choice!=6) {
        printf("\n\nChoices Menu");
        printf("\n----------------");
        printf("\n1-Entrance of the array's length");
        printf("\n2-Initialization of the array");
        printf("\n3-Calculation of the array's maximum value");
        printf("\n4-Calculation of the array's minimum value");
        printf("\n5-Array's Printing");
        printf("\n6-Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        if (choice==1) {
            printf("Enter the array's length: ");
            scanf("%d", &N);
        }
        else if (choice==2) {
            printf("Enter the start of the random numbers space: ");
			scanf("%d",&a);
			printf("Enter the end of the random numbers space: ");
			scanf("%d",&b);
			init_array(array, N, a, b);
        }
        else if (choice==3) {
            printf("The maximum of the array's values is: %d", max_array(array, N)); 
        }
        else if (choice==4) {
            printf("The minimum of the array's values is: %d", min_array(array, N)); 
        }
        else if (choice==5) {
            print_array(array, N);
        }
        else if (choice==6) {
            printf("Exit of the Program!");
        }
    }
    
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
    for (i=0; i<n; i++) {
        printf("%d ", array[i]);
    }
}

int max_array(int *array, int n) {
    int i;
    int max;
    max=array[0];
    for (i=1; i<n; i++) {
        if (array[i]>max) {
            max = array[i];
        }
    }
    return max;
}


int min_array(int *array, int n) {
    int i;
    int min;
    min=array[0];
    for (i=1; i<n; i++) {
        if (array[i]<min) {
            min = array[i];
        }
    }
    return min;
}
