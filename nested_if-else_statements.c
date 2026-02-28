// Program to find minimum of three numbers using nested if-else
// Author: Prince Verma

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int num1, num2, num3;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter third number: ");
    scanf("%d", &num3);

    if (num1 < num2)
    {
        if (num1 < num3)
        {
            printf("\n%d is the minimum number.\n", num1);
        }
        else
        {
            printf("\n%d is the minimum number.\n", num3);
        }
    }
    else
    {
        if (num2 < num3)
        {
            printf("\n%d is the minimum number.\n", num2);
        }
        else
        {
            printf("\n%d is the minimum number.\n", num3);
        }
    }

    return 0;
}
