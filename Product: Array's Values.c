/* Product of Array's Values */
// (lesson 5: exercise 6)
#include <stdio.h>

int main() {
    int array[5];
    int i,x,pr;
    pr=1;
    for (i=0; i<5; i++) {
        printf("\nEnter an integer number: ");
        scanf("%d",&x);
        if (x<1 || x>8) {
            printf("The number must be between 1 and 8!");
            printf("\nPlease enter a valid input!");
            continue;
        }
        else {
            array[i]=x;
        }
    }
    for (i=0; i<5; i++) {
        pr*= array[i];
    }
    printf("The product of the array's values is: %d",pr);
}
