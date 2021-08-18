//  10. Program to determine whether a number is divisible by 97 or not

#include <stdio.h>

int main()
{
    int num;

    printf("Enter the number : ");
    scanf("%d", &num);

    printf("\nDivisibility test returns: %d\n", num % 97);

    return 0;
}