// 9. Program to find the largest number of the three.

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("\nEnter three numbers : ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("\n%d is largest", a);
    }
    if (b > a && b > c)
    {
        printf("\n%d is largest", b);
    }
    if (c > a && c > b)
    {
        printf("\n%d is largest", c);
    }
    if (a == b && a == c)
    {
        printf("\nAll are equal");
    }

    return 0;
}