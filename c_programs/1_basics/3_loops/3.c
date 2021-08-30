// 3a. Program to print first n even numbers using while loop.

#include <stdio.h>

int main()
{
    int i = 2, n;
    //to print odd numbers set variable i = 1

    printf("Enter n : ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d\t", i);
        i = i + 2;
    }

    return 0;
}


// 3b. Program to print first n even numbers using for loop.

#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter the number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\t", i);
        }
    }

    return 0;
}