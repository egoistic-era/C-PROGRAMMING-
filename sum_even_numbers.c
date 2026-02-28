// Program to calculate sum of all even numbers up to a given number
// Author: Prince Verma

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int n, i = 2, sum = 0;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum += i;   // Add even number to sum
        i += 2;     // Move to next even number
    }

    printf("\nSum of all even numbers up to %d = %d\n", n, sum);

    return 0;
}
