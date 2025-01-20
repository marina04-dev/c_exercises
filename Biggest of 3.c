// Biggest of 3 (4 lesson - exercise 3)
#include <stdio.h>


int main() {
    int i,z,j;
    printf("Enter an integer number: ");
    scanf("%d",&i);
    printf("Enter another integer number: ");
    scanf("%d",&z);
    printf("Enter another integer number: ");
    scanf("%d",&j);
    if (i>z && i>j) {
        printf("The biggest number is: i = %d",i);
    }
    else if(i<z && j<z) {
        printf("The biggest number is: z = %d",z);
    }
    else if (i<j && j>z){
        printf("The biggest number is: j = %d",j);
    }
    else if (i==z && i>j) {
        printf("The biggest numbers are: i = %d , z = %d",i,z);
    }
    else if (j==z && i<j) {
        printf("The biggest numbers are: j = %d , z = %d",j,z);
    }
    else if (i==j && z<j) {
        printf("The biggest numbers are: i = %d , j = %d",i,j);
    }
    else {
        printf("The numbers are equal: i = %d , z = %d , j = %d",i,z,j);
    }
}
