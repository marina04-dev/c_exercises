/* Dynamic Struct Person - Dynamic Snapshots - Copy Record (Lesson 13: Exercise 6) */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 80

struct person {
    char *name;
    char *address;
    char *number;
    char *state;
};

typedef struct person RECORD;

void read_record(RECORD *p);
void print_record(RECORD x);
void init_record(RECORD *p);
void free_record(RECORD x);
void copy_record(RECORD *dest, RECORD src);

int main()
{
    RECORD *array, x;
    int i,N, choice;
    
    printf("Enter the amount of structs: ");
    scanf("%d", &N);
    
    array=malloc(sizeof(RECORD)*N);
    if (!array) {
        printf("Error Allocating Memory!");
        exit(0);
    }
    
    /* Initialization of the array's snapshots */
    for (i=0; i<N; i++) {
        init_record(&array[i]);
    }
    
    /* Reading of the array's snapshots */
    for (i=0; i<N; i++) {
        printf("Person %d: \n", i+1);
        read_record(&array[i]);
    }
    
    /* Snapshots Printing */
    for (i=0; i<N; i++) {
        print_record(array[i]);
    }
    
    /* Snapshot Copy */
    printf("\n\nEnter a record you want to copy (0-%d): ",N-1);
    scanf("%d", &choice);
    
    copy_record(&x, array[choice]);
    printf("\n\nSnapshot's Printing: ");
    print_record(x);
    
    /* Memory Release */
    for (i=0; i<N; i++) {
        free_record(array[i]);
    }
    free_record(x);
    free(array);
}

void read_record(RECORD *p) {
    printf("Enter the name: ");
    scanf("%s", p->name);
    
    printf("Enter the address: ");
    scanf("%s", p->address);
    
    printf("Enter the address number: ");
    scanf("%s", p->number);
    
    printf("Enter the address state: ");
    scanf("%s", p->state);
    
}

print_record(RECORD x) {
    printf("\n%s: %s %s %s", x.name, x.address, x.number, x.state);
}

init_record(RECORD *p) {
    p->name = malloc(sizeof(char)*SIZE);
    if (!p->name) {
        printf("Error Allocating Memory!");
        exit(0);
    }
    
    p->address = malloc(sizeof(char)*SIZE);
    if (!p->address) {
        printf("Error Allocating Memory!");
        exit(0);
    }
    
    p->number = malloc(sizeof(char)*SIZE);
    if (!p->number) {
        printf("Error Allocating Memory!");
        exit(0);
    }
    
    p->state = malloc(sizeof(char)*SIZE);
    if (!p->state) {
        printf("Error Allocating Memory!");
        exit(0);
    }
}

void free_record(RECORD x) {
    free(x.name);
    free(x.address);
    free(x.number);
    free(x.state);
}

void copy_record(RECORD *dest, RECORD src) {
    strcpy(dest->name, src.name);
    strcpy(dest->address, src.address);
    strcpy(dest->number, src.number);
    strcpy(dest->state, src.state);
}
