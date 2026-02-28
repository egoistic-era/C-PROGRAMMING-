// Program to demonstrate bitwise operators
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

    printf("\nBitwise AND  (num1 & num2)  = %d\n", num1 & num2);
    printf("Bitwise OR   (num1 | num2)  = %d\n", num1 | num2);
    printf("Bitwise XOR  (num1 ^ num2)  = %d\n", num1 ^ num2);
    printf("Left Shift   (num1 << 1)    = %d\n", num1 << 1);
    printf("Right Shift  (num1 >> 1)    = %d\n", num1 >> 1);

    return 0;
}
