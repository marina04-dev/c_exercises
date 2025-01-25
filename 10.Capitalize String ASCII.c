/* Capitalize String ASCII codes (lesson 10: Exercise 3) */
#include <stdio.h>

#define SIZE 150

int main() {
    char str[SIZE];
    int i;
    
    printf("Enter the string: ");
    gets(str1);
    
    i=0;
    while (str[i]!='\0') {
        if (str[i]>='a' && str[i]<='z') {
            str[i]=str[i]-32;
        }
        i++;
    }
    
    printf("Capitalize given string: %s", str);
}
