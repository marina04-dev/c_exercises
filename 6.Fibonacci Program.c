/* Fibonacci Program */
/* (lesson 6: exercise 4) */

#include <stdio.h>

int fibonacci(int n);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    printf("Number Fibonacci-%d is %d",n,fibonacci(n));
}


int fibonacci(int n) {
    if (n==1 || n==2) {
        return 1;
    }
    else {
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
