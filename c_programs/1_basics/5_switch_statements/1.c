// 1. To print number of days in a month using switch case via user

#include <stdio.h>

int main()
{
    int monthnumber;

    printf("Enter month number(1-12): ");
    scanf("%d", &monthnumber);

    switch (monthnumber)
    {
    case 1:
        printf("31 days");
        break;
    case 2:
        printf("28 or 29 days");
        break;
    case 3:
        printf("31 days");
        break;
    case 4:
        printf("30 days");
        break;
    case 5:
        printf("31 days");
        break;
    case 6:
        printf("30 days");
        break;
    case 7:
        printf("31 days");
        break;
    case 8:
        printf("31 days");
        break;
    case 9:
        printf("30 days");
        break;
    case 10:
        printf("31 days");
        break;
    case 11:
        printf("30 days");
        break;
    case 12:
        printf("31 days");
        break;
    default:
        printf("Invalid input!!! enter month number between 1-12");
    }

    return 0;
}