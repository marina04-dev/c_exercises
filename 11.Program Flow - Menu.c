/* Switch - Program Flow  (lesson 11: exercise 1) */
#include <stdio.h>

void print();
void array_enter();

int main() {
    int i, choice;
    float num;
    
    do{
		printf("Ente a number between 1 and 4: ");
		scanf("%d",&choice);
	} while (choice<1 || choice>4);
        
    switch (choice){
        case 1:
            printf("Enter the i: ");
            scanf("%d", &i);
            printf("The square of the i: %d given is: ", i, i*i);
            break;
        case 2:
            print();
            break;
        case 3: 
            printf("Enter a float number: ");
            scanf("%f", &num);
            printf("The 1/4 of the number you gave: %.4f is %.4f", num, num/4);
            break;
        case 4:
            array_enter();
            break;
        default:
            printf("Wrong Input!");
            break;
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
