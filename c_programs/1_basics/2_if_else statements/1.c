// 1. Program to accept two number from the user and print largest among them.

#include <stdio.h>

int main()
{
    int x, y;

    printf("\nEnter 1st number : ");
    scanf("%d", &x);

    printf("\nEnter 2nd number : ");
    scanf("%d", &y);

    if (x > y)
        printf("\nLargest value is : %d", x);
    else
        printf("\nLargest value is : %d", y);

    return 0;
}
