/* Printf-Scanf (lesson 9: exercise 1) */
#include <stdio.h>

void print();
void array_enter();

int main() {
    int i, choice;
    float num;
    while (1) {
        printf("\nMenu");
        printf("\n====================");
        printf("\n1-Print the square of the variable given");
        printf("\n2-Function: Good Morning * N");
        printf("\n3-Print 1/4 of float variable given");
        printf("\n4-Array entering function + average");
        printf("\n5-Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        if (choice==1) {
            printf("Enter the i: ");
            scanf("%d", &i);
            printf("The square of the i: %d given is: ", i, i*i);
        }
        else if (choice==2) {
            print();
        }
        else if (choice==3) {
            printf("Enter a float number: ");
            scanf("%f", &num);
            printf("The 1/4 of the number you gave: %.4f is %.4f", num, num/4);
        }
        else if (choice==4) {
            array_enter();
        }
        else if (choice==5) {
            printf("Exit of the program!");
            break;
        }
    }
}

void print() {
    int i, N;
    printf("Enter the N: ");
    scanf("%d", &N);
    
    for (i=0; i<N; i++) {
        printf("\nGood Morning!");
    }
}

void array_enter() {
    double array[5];
    int i;
    double sum, avg;
    
    
    for (i=0; i<5; i++)
	{
		printf("Enter the %d double number: ", i+1);
		scanf("%lf",&array[i]);
	}
	
	sum=0.0;
    for (i=0; i<5; i++) {
        sum+=array[i];
    }
    avg=sum/5;
    
    printf("The array's values average is: %.3f", avg);
}
