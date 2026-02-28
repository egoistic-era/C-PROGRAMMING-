// Menu Driven Calculator Using Switch-Case
// Author: Prince Verma

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int choice;
    float num1, num2, result;

    printf("===== MENU DRIVEN CALCULATOR =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 4)
    {
        printf("Enter first number: ");
        scanf("%f", &num1);

        printf("Enter second number: ");
        scanf("%f", &num2);
    }

    switch (choice)
    {
        case 1:
            result = num1 + num2;
            printf("\nResult: %.2f\n", result);
            break;

        case 2:
            result = num1 - num2;
            printf("\nResult: %.2f\n", result);
            break;

        case 3:
            result = num1 * num2;
            printf("\nResult: %.2f\n", result);
            break;

        case 4:
            if (num2 != 0)
            {
                result = num1 / num2;
                printf("\nResult: %.2f\n", result);
            }
            else
            {
                printf("\nError! Division by zero.\n");
            }
            break;

        case 5:
            printf("\nExiting calculator...\n");
            break;

        default:
            printf("\nInvalid choice!\n");
    }

    return 0;
}
