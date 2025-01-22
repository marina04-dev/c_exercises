/* Functions Input's Checking */
// (lesson 6: exercise 1)
#include <stdio.h>

int get_integer(int start, int finish);

int main() {
    int a,b,n;
    
    // Input's reading
    printf("Enter the a: ");
    a=get_integer(1,10);
    printf("Enter the b: ");
    b=get_integer(1,10);
    printf("Enter the n: ");
    n=get_integer(2,5);
    
    // Results Calculation
    printf("The result of n*(a-b) is %d", n*(a-b));
}
        
        
int get_integer(int start, int finish) {
    int x;
    do {
        printf("\nEnter a number between %d and %d: ",start, finish);
        scanf("%d",&x);
    } while (start>x || x>finish);
    return x;
}
