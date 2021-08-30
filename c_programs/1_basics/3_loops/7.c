// 7. Program to take number from user and print table of that number.

#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter number : ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
        printf("\n%d × %d = %d", n, i, n * i);

    return 0;
}
 

// via do while loop

#include <stdio.h>

int main()
{
    int n, i = 1;
    printf("Enter number : ");
    scanf("%d", &n);

    do
    {
        printf("\n%d * %d = %d", n, i, n * i);
        i++;
    } while (i <= 10);

    return 0;
}
