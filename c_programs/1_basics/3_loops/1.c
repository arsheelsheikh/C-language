// 1a. Program to print numbers from 1 to n using while loop.

#include <stdio.h>

int main()
{
    int i = 1, n;

    printf("Enter n : ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d\t", i);
        i++; //Increment Operator
    }

    return 0;
}

// 1b. Program to print numbers from n to 1 using for loop.

#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter n : ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        printf("%d\t", i);
    }

    return 0;
}