/* Function mystrcmp + check_string (lesson 10: Exercise 5) */
#include <stdio.h>
#include <stdlib.h>


#define TRUE 1 
#define FALSE 0
#define SIZE 150

int check_string(char *str);
int mystrcmp(char *str1, char *str2);



int main() {
    char str1[SIZE], str2[SIZE];
    int x;
    
    printf("Enter the 1st string: ");
    gets(str1);
    if (check_string(str1)==FALSE) {
        printf("Wrong Input!");
        exit(0);
    }
    
    printf("Enter the 2nd string: ");
    gets(str2);
    if (check_string(str2)==FALSE) {
        printf("Wrong Input!");
        exit(0);
    }
    
    x=mystrcmp(str1, str2);
    
    if (x==-1) {
        printf("\n1st string: %s < 2nd string: %s", str1, str2);
    }
    else if (x==0) {
        printf("\n1st string: %s == 2nd string: %s", str1, str2);
    }
    else {
        printf("\n1st string: %s > 2nd string: %s", str1, str2);
    }
}

int check_string(char *str) {
    int i;
    i=0;
    while (str[i]!='\0') {
        if (!(str[i]>='a' && str[i]<='z')) {
            return FALSE;
        }
        i++;
    }
    return TRUE;
}

/* mystrcmp Function's explanation: This function returns :
-1 if length(str1) < length(str2)
0 if length(str1) == length(str2)
1 if length(str1) > length(str2) */

int mystrcmp(char *str1, char *str2) {
    int i;
    i=0;
    
    while (1) {
        if (str1[i]=='\0' && str2[i]!='\0') {
            return -1;
        }
        else if(str2[i]=='\0' && str1[i]!='\0') {
            return 1;
        }
        else if (str1[i]=='\0' && str2[i]=='\0') {
            return 0;
        }
        
        if (str1[i]<str2[i]) {
            return -1;
        }
        else if (str1[i]>str2[i]) {
            return 1;
        }
        i++;
    }
}
