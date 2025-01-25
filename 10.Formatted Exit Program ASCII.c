/* Exit Formatting (lesson 10: Exercise 4) */
#include <stdio.h>

#define M 20
#define N 4

int main() {
    int i;
    
    // 1st Formatted Line 
    printf("\n\n\n\n\t\t%c", 201);
    for (i=1; i<M; i++) {
        printf("%c", 205);
    }
    printf("%c", 187);
    
    // 2nd Formatted Line 
    printf("\n\t\t%c", 200);
    for (i=1; i<=N; i++) {
        printf(" ", 205);
    }
    printf("Hello World!");
    for (i=1; i<=N; i++) {
        printf(" ", 205);
    }
    printf("%c", 186);
    
    // 3rd Formatted Line 
    printf("\n\t\t%c", 200);
    for (i=1; i<M; i++) {
        printf("%c", 205);
    }
    printf("%c\n\n\n\n", 188);
}
