// 5. Program to accept a number and print that number in reverse order.
// Ex:- 1024
// Output:- 4201

#include <stdio.h>

int main()
{
    int reminder, n;

    printf("Enter n : ");
    scanf("%d", &n);

    while (n > 0)
    {
        reminder = n % 10;
        printf("\n%d", reminder);
        n = n / 10;
    }
    return 0;
}
