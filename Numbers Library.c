/* Numbers Library */
// (lesson 6: exercise 2)
#include <stdio.h>

int is_even(int n);
int is_odd(int n);
int is_square(int n);
int is_cube(int n);

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if (is_even(x)==1) {
        printf("The number %d is even!",x);
    }
    if(is_odd(x)==1) {
        printf("The number %d is odd!",x);
    }
    if(is_square(x)==1) {
        printf("The number %d is square!",x);
    }
    if(is_cube(x)==1) {
        printf("The number %d is cube!",x);
    }
}
        
int is_even(int n) {
    if (n%2==0) {
        return 1;
    }
    else {
        return 0;
    }
}


int is_odd(int n) {
    if (n%2==1) {
        return 1;
    }
    else {
        return 0;
    }
}
int is_square(int n) {
    int i;
    for (i=1; i<=n; i++) {
        if (i*i==n) {
            return 1;
        }
        else if (i*i>n){
            return 0;
        }
    }
}


int is_cube(int n) {
    int i;
    for (i=1; i<=n; i++) {
        if (i*i*i==n) {
            return 1;
        }
        else if (i*i*i>n){
            return 0;
        }
    }
}      
