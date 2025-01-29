/* Dynamic Struct Person  (Lesson 13: Exercise 3) */
#include <stdio.h>
#include <stdlib.h>

#define N 80

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

int main()
{
    RECORD a, b;
    init_record(&a);
    init_record(&b);
    
    printf("1st Person: \n");
    read_record(&a);
    printf("2nd Person: \n");
    read_record(&b);
    
    print_record(a);
    print_record(b);
    
    free_record(a);
    free_record(b);
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
    p->name = malloc(sizeof(char)*N);
    if (!p->name) {
        printf("Error Allocating Memory!");
        exit(0);
    }
    
    p->address = malloc(sizeof(char)*N);
    if (!p->address) {
        printf("Error Allocating Memory!");
        exit(0);
    }
    
    p->number = malloc(sizeof(char)*N);
    if (!p->number) {
        printf("Error Allocating Memory!");
        exit(0);
    }
    
    p->state = malloc(sizeof(char)*N);
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
