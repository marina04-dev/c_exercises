/* Function mystrlen(char *s): string's length (lesson 10: Exercise 1) */
#include <stdio.h>

#define SIZE 1000

int mystrlen(char *s);

int main() {
    char str[SIZE];
    
    printf("Enter the string: ");
    gets(str);
    
    printf("The length of the given string is: %d", mystrlen(str));
}

int mystrlen(char *s) {
    int cnt=0;
    while (s[cnt]!='\0') {
        cnt++;
    }
    return cnt;
}
