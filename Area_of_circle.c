// Program to calculate area of a circle
// Author: Prince Verma

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    system("cls");
    float radius, area;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;

    printf("Area of circle: ", area);

    return 0;
}
