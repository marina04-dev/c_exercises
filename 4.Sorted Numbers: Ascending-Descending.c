// Sorted Numbers Descending Order (lesson 4: exercise 4)
#include <stdio.h>


int main() {
    int x,y,z;
    printf("Enter an integer number: ");
    scanf("%d",&x);
    printf("Enter another integer number: ");
    scanf("%d",&y);
    printf("Enter another integer number: ");
    scanf("%d",&z);
    if (x<y) {
        if (x<z) {
            if (y<z) {
                // x<y<z
                printf("The numbers sorted are: %d %d %d",z,y,x);
            }
            else { // x<z<=y
                printf("The numbers sorted are: %d %d %d",y,z,x);
            }
        }
        else { // z<=x
            // z<=x<y
            printf("The numbers sorted are: %d %d %d", y,x,z);
        }
    }
    else { // y<=x
        if (y<z) {
            if (x<z) {
                // y<=x<z 
                printf("The numbers sorted are: %d %d %d", z,x,y);
            }
            else { // z<=x
                // y<x<=z 
                printf("The numbers sorted are: %d %d %d", z,x,y);
            }
        }
        else { // z<=y
            // z<=y<=x
            printf("The numbers sorted are: %d %d %d",x,y,z);
        }
    }
        
}

// Sorted Numbers Ascending Order (lesson 4: exercise 4)
#include <stdio.h>


int main() {
    int x,y,z;
    printf("Enter an integer number: ");
    scanf("%d",&x);
    printf("Enter another integer number: ");
    scanf("%d",&y);
    printf("Enter another integer number: ");
    scanf("%d",&z);
    if (x<y) {
        if (x<z) {
            if (y<z) {
                // x<y<z
                printf("The numbers sorted are: %d %d %d",x,y,z);
            }
            else { // x<z<=y
                printf("The numbers sorted are: %d %d %d",x,z,y);
            }
        }
        else { // z<=x
            // z<=x<y
            printf("The numbers sorted are: %d %d %d", z,x,y);
        }
    }
    else { // y<=x
        if (y<z) {
            if (x<z) {
                // y<=x<z 
                printf("The numbers sorted are: %d %d %d", y,x,z);
            }
            else { // z<=x
                // y<x<=z 
                printf("The numbers sorted are: %d %d %d", y,x,z);
            }
        }
        else { // z<=y
            // z<=y<=x
            printf("The numbers sorted are: %d %d %d",z,y,x);
        }
    }
        
}
