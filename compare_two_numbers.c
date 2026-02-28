// Program to compare two integers using relational operators
// Author: Prince Verma

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int num1, num2;

    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    printf("\nResults of Relational Operators:\n");

    printf("num1 == num2 : %d\n", num1 == num2);
    printf("num1 != num2 : %d\n", num1 != num2);
    printf("num1 >  num2 : %d\n", num1 > num2);
    printf("num1 <  num2 : %d\n", num1 < num2);
    printf("num1 >= num2 : %d\n", num1 >= num2);
    printf("num1 <= num2 : %d\n", num1 <= num2);

    return 0;
}
