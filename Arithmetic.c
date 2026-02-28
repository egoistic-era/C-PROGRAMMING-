// egoistic-era
// arithmetic-Operations 
// Author:- Prince Verma

// Arithmetic Operations Program
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

    printf("\nResults:\n");

    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);

    if (b != 0)
    {
        printf("Division: %d\n", a / b);
        printf("Modulus: %d\n", a % b);
    } else 
    {
        printf("Division and Modulus not possible (division by zero).\n");
    }

    return 0;
}
