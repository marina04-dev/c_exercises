/* Seconds to Hours, Minutes, Seconds */
/* This program takes a number of seconds from the input and prints 
the number of hours , minutes and seconds it represents */
// (lesson 4: exercise 5)
#include <stdio.h>

int main() {
    int i;
    int hours, seconds, minutes;
    printf("Enter the number of seconds: ");
    scanf("%d",&i);
    hours = i/3600;
    i=i%3600;
    minutes=i/60;
    seconds = i%60;
    
    printf("Hours: %d",hours);
    printf("\nMinutes: %d",minutes);
    printf("\nSeconds: %d",seconds);
}
