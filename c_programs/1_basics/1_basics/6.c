// 6. Program to accept value of radius from the user and print area of a circle.

#include <stdio.h>

int main()
{
    float area, radius;

    printf("Enter Radius: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;

    printf("\nArea of circle: %f", area);

    return 0;
}
