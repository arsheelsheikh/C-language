// 6. Program to read three angles of triangle and check if it forms triangle or not.

#include <stdio.h>

int main()
{
    int a1, a2, a3;
    printf("Enter Three Angles of Triangle:\n");
    scanf("%d %d %d", &a1, &a2, &a3);

    if (a1 + a2 + a3 == 180)
        printf("\nTriangle Formed");
    else
        printf("\nTriangle NOT Formed");

    return 0;
}
