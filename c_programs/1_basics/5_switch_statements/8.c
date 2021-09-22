/* 8. Program using switch case statement, to find out multiple arthematic operators such as:
1. Addition
2. Subtraction
3. Multiplication
4. division
5. Remainder
*/


#include <stdio.h>
int main()
{
    int a, b, c, ch;
    float d;
    printf("=======================");
    printf("\n\t*MENU*");
    printf("\n=======================");
    printf("\n 1] Addition");
    printf("\n 2] Subtraction");
    printf("\n 3] Multiplication");
    printf("\n 4] Division");
    printf("\n 5] Remainder");
    printf("\n=======================\n");
    printf("Enter your choice : ");
    scanf("%d", &ch);
    printf("-----------------------\n");
    if (ch <= 5 && ch > 1)
    {
        printf("  Enter Two Numbers\n");
        printf("-----------------------\n");
        printf("Enter First Number  : ");
        scanf("%d", &a);
        printf("\nEnter Second Number : ");
        scanf("%d", &b);
        printf("-----------------------\n");
    }
    switch (ch)
    {
    case 1:
        c = a + b;
        printf("Addition of Numbers =  %d", c);
        break;
    case 2:
        c = a - b;
        printf("Subtraction of Numbers = %d", c);
        break;
    case 3:
        c = a * b;
        printf("Multiplication of Numbers = %d", c);
        break;
    case 4:
        d = a / (float)b;
        printf("Division of Numbers = %.2f", d);
        break;
    case 5:
        c = a % b;
        printf("Remainder of Numbers = %d", c);
        break;
    default:
        printf("Invalid Choice");
    }

    return 0;
}