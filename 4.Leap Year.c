/* Leap Year */
// (lesson 4: exercise 7)
#include <stdio.h>

int main() {
    int year;
    printf("Enter year: ");
    scanf("%d",&year);
    
    if (year%4==0) {
        if (year%100==0 && year%400==0) {
            printf("%d is not a Leap Year!",year);
        }
        else {
            printf("%d is a Leap Year!",year);
        }
    }
    else {
        printf("%d is not a Leap Year!",year);
    }
}
