// Program to demonstrate switch-case statement
// Author: Prince Verma

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int choice;

    printf("===== MENU =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("\nYou selected Addition.\n");
            break;

        case 2:
            printf("\nYou selected Subtraction.\n");
            break;

        case 3:
            printf("\nYou selected Multiplication.\n");
            break;

        case 4:
            printf("\nYou selected Division.\n");
            break;

        default:
            printf("\nInvalid choice!\n");
    }

    return 0;
}
