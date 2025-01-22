/* Calculation of the Roots of the Second grade Equation */
/* lesson 8: exercise 1 */
#include <stdio.h>
#include <math.h>

int roots(float a, float b, float c, float *x1, float *x2);

int main() {
    float a, b, c, root1, root2;
    int sum;
    
    /* 1.Input reading */
    printf("Enter the a: ");
    scanf("%f", &a);
    
    printf("Enter the b: ");
    scanf("%f", &b);
    
    printf("Enter the c: ");
    scanf("%f", &c);
    
    /* 2.Roots Calculation */
    sum=roots(a, b, c, &root1, &root2);
    
    /* 3.Result printing */
    if (sum==0) {
        printf("Float roots do not exist!");
    }
    else if (sum==1) {
        printf("The equation has one double root, which is: %f", root1);
    }
    else {
        printf("The roots are: %f and %f", root1, root2);
    }
}

int roots(float a, float b, float c, float *x1, float *x2) {
    float D;
    D = (b*b)-(4*a*c);
    
    if (D<0) {
        return 0;
    }
    else if(D==0) {
        *x1 = -b/(2*a);
        return 1;
    }
    else {
        *x1 = (-b+sqrt(D))/(2*a);
        *x2 = (-b-sqrt(D))/(2*a);
        return 2;
    }
}
