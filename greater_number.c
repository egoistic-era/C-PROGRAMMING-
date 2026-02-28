// Program to find greater number using if-else
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

    if (num1 > num2)
    {
        printf("\n%d is greater than %d\n", num1, num2);
    }
    else if (num2 > num1)
    {
        printf("\n%d is greater than %d\n", num2, num1);
    }
    else
    {
        printf("\nBoth numbers are equal.\n");
    }

    return 0;
}
