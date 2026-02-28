// Program to demonstrate logical operators
// Author: Prince Verma

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\nLogical AND (num1 > 0 && num2 > 0): %d", (num1 > 0 && num2 > 0));
    printf("\nLogical OR  (num1 > 0 || num2 > 0): %d", (num1 > 0 || num2 > 0));
    printf("\nLogical NOT (! (num1 > 0)): %d", !(num1 > 0));

    return 0;
}
