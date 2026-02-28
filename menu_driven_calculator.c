/* 
egoistic-era
arithmetic-Operations
Author: Prince Verma
*/

// Menu Driven Calculator
// Author: Prince Verma

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    system("cls");
    int choice;
    float a, b;

    printf("===== MENU DRIVEN CALCULATOR =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 4)
    {

        printf("Enter first number: ");
        scanf("%f", &a);

        printf("Enter second number: ");
        scanf("%f", &b);
    }

    switch (choice) 
    {

        case 1:
            printf("Result: %.2f\n", a + b);
            break;

        case 2:
            printf("Result: %.2f\n", a - b);
            break;

        case 3:
            printf("Result: %.2f\n", a * b);
            break;

        case 4:
            if (b != 0)
                printf("Result: %.2f\n", a / b);
            else
                printf("Error! Division by zero.\n");
            break;

        case 5:
            printf("Exiting calculator...\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
