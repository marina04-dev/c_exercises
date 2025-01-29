/* Struct Person  (Lesson 13: Exercise 2) */
#include <stdio.h>

#define N 80

struct person {
    char name[N];
    char address[N];
    char number[N];
    char state[N];
};

typedef struct person RECORD;

void read_record(RECORD *p);
void print_record(RECORD x);

int main()
{
    RECORD a, b;
    printf("1st Person: \n");
    read_record(&a);
    printf("2nd Person: \n");
    read_record(&b);
    
    print_record(a);
    print_record(b);
    
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
