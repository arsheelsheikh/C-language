// 4. Program to check even or odd number (values accept via user).

#include <stdio.h>

int main()
{
    int num;

    printf("\nEnter number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("\nNumber is even");
    else
        printf("\nNumber is odd");

    return 0;
}
