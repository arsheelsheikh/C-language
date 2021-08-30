// 2. Program to print numbers from n to 1 using Do While loop.

#include <stdio.h>

int main()
{
    int i = 1, n;

    printf("Enter n : ");
    scanf("%d", &n);

    i = n;

    do
    {
        printf("%d\t", i);
        i--; //Decrement Operator
    } while (i >= 1);

    return 0;
}
