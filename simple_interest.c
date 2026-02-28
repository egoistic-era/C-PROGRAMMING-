// Program to calculate Simple Interest
// Author: Prince Verma

#include <stdio.h>
#include <stdlib.h>

int main() 
{

    system("cls");

    float principal, rate, time, simple_interest;

    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    simple_interest = (principal * rate * time) / 100;

    printf("\nSimple Interest = %.2f\n", simple_interest);

    return 0;
}
