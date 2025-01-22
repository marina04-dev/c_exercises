/* Greatest common divisor */
/* (lesson 6: exercise 5) */

#include <stdio.h>

int gcd(int a, int b);

int main() {
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    
    printf("Enter the second number: ");
    scanf("%d",&b);
    
    printf("The greatest common divisor is: %d", gcd(a,b));
}


int gcd(int a, int b) {
    if (a==b) {
        return a;
    }
    else if(a<b) {
        return gcd(a,b-a);
    }
    else {
        return gcd(a-b,b);
    }
}
