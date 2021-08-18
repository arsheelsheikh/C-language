// 9. Program to accept two values of a & b and swaping their values.

#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("\nEnter 1st number : ");
    scanf("%d", &a);

    printf("\nEnter 2nd number : ");
    scanf("%d", &b);

    printf("\nBefore Swapping >> ");
    printf("A=%d, B=%d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("\nAfter Swapping >> ");
    printf("A=%d, B=%d", a, b);

    return 0;
}
