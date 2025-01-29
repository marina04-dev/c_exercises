/* Euklidean Distance Struct Point (Lesson 13: Exercise 1) */
#include <stdio.h>
#include <math.h>

struct point {
    float x;
    float y;
};

void read_point(struct point *p);
float euk(struct point A, struct point B);

int main()
{
    struct point A, B;
    printf("Point A: \n");
    read_point(&A);
    printf("Point B: \n");
    read_point(&B);
    
    
    printf("The Euclidean Distance of Point A and Point B is: %.3f", euk(A,B));
    
}

void read_point(struct point *p) {
    printf("Enter the x: ");
    scanf("%f", &p->x);
    
    printf("Enter the y: ");
    scanf("%f", &p->y);
    
}

float euk(struct point A, struct point B) {
    return sqrt(pow(A.x-B.x,2)+pow(A.y-B.y,2));
}
