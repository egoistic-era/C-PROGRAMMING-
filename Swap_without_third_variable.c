// Program to swap two numbers without third variable
// Author: Prince Verma

#include <stdio.h>
#include <stdlib.h>

int main() 
{

    system("cls");

    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nBefore swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Swapping logic (without third variable)
    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
