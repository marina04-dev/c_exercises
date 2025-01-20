/* First Numbers */
// (lesson 6: exercise 3)
#include <stdio.h>

int isprime(int n);

int main() {
    int i, start, finish;
    do {
        printf("Enter the start of the space: ");
        scanf("%d", &start);
        
        if (start<=0) {
            printf("Wrong Input! It must be greater than 0");
        }
    } while (start<=0);
    
    do {
        printf("Enter the end of the space: ");
        scanf("%d", &finish);
        
        if (!(start<=finish)) {
            printf("Wrong Input! It must be greater than the starts: %d",start);
        }
    } while (!(start<=finish));
    
    
    for (i=start; i<=finish; i++) {
        if (isprime(i)) {
            printf("\nNumber %d is first",i);
        }
    }
}

int isprime(int n) {
    int i;
    int check;
    
    if (n==0 || n==1) {
        return 0;
    }
    check=1;
    for (i=2; i<=n/2; i++) {
        if (n%i==0) {
            check=0;
        }
    }
    return check;
}
        
