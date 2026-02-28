// Program to print multiplication table of any number using for loop
// Author: Prince Verma

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int num, i;

    printf("Enter a number to print its table: ");
    scanf("%d", &num);

    printf("\nMultiplication Table of %d:\n", num);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
