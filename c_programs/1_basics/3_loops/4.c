// 4. Program to print all odd numbers between 1 to n using while loop.

#include <stdio.h>

int main()
{
    int i, num;
    printf("Enter the number : ");
    scanf("%d", &num);

    i = 1;
    while (i <= num)
    {
        if (i % 2 != 0)
        {
            printf("\n%d", i);
        }
        i++;
    }

    return 0;
}