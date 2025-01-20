/* Game with Dies: The biggest die wins */
// (lesson 4: exercise 6)
#include <stdio.h>

int main() {
    int dieA1,dieA2,sumA;
    int dieB1,dieB2,sumB;
    
    // Player A
    printf("Player A Plays:");
    printf("\nEnter the die's 1 result: ");
    scanf("%d",&dieA1);
    printf("\nEnter the die's 2 result: ");
    scanf("%d",&dieA2);
    sumA=dieA1+dieA2;
    
    // Player B
    printf("Player B Plays:");
    printf("\nEnter the die's 1 result: ");
    scanf("%d",&dieB1);
    printf("\nEnter the die's 2 result: ");
    scanf("%d",&dieB2);
    sumB=dieB1+dieB2;
    
    if (sumA>sumB) {
        printf("\nResults:");
        printf("\nPlayer A won!");
    }
    else if (sumB>sumA) {
        printf("\nResults:");
        printf("\nPlayer B won!");
    }
    else {
        printf("\nResults:");
        printf("\nDraw!");
    }
}
