// Program to check whether a year is a leap year
// Author: Prince Verma

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year logic
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("\n%d is a Leap Year.\n", year);
    }
    else
    {
        printf("\n%d is Not a Leap Year.\n", year);
    }

    return 0;
}
