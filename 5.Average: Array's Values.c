/* Average of Array's Values */
// (lesson 5: exercise 6)
#include <stdio.h>

int main() {
    int N;
    int i;
    int x;
    int array[30];
    int sum;
    while (1){
        printf("\nEnter a number (array's length): ");
        scanf("%d",&N);
        if (N<1 || N>20) {
            printf("The number must be between 1 and 20!");
            printf("Please enter a valid number!");
            continue;
        }
        else {
            for (i=0; i<N; i++) {
                printf("Enter a number: ");
                scanf("%d",&x);
                array[i]=x;
            }
            break;
        }
    }
    
    sum=0;
    for (i=0; i<N+1; i++) {
        sum+=array[i];
    }
    printf("The average of the array's numbers is: %d", sum/N);
}
        
