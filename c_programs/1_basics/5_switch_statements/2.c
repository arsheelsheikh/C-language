// 2. To print day of week name using switch case via user

#include <stdio.h>
int main()
{
    int weeknumber;

    printf("Enter week number(1-7): ");
    scanf("%d", &weeknumber);

    switch (weeknumber)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Invalid input! Please enter week no. between 1-7.");
    }
    return 0;
}