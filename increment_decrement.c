// Program to demonstrate increment and decrement operators
// Author: Prince Verma

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int a = 10;

    printf("Initial value of a = %d\n\n", a);

    // Pre-increment
    printf("Pre-increment (++a) = %d\n", ++a);
    printf("Value of a after pre-increment = %d\n\n", a);

    // Post-increment
    printf("Post-increment (a++) = %d\n", a++);
    printf("Value of a after post-increment = %d\n\n", a);

    // Pre-decrement
    printf("Pre-decrement (--a) = %d\n", --a);
    printf("Value of a after pre-decrement = %d\n\n", a);

    // Post-decrement
    printf("Post-decrement (a--) = %d\n", a--);
    printf("Value of a after post-decrement = %d\n", a);

    return 0;
}
