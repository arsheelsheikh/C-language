// 13a. Program to accept three numbers from user and print them in ascending and decending order (using if else).

#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if ((num1 >= num2) && (num1 >= num3))
    {
        if (num2 >= num3)
        {
            printf("\nDesc : %d %d %d", num1, num2, num3);
            printf("\nAsc : %d %d %d", num3, num2, num1);
        }
        else
        {
            printf("\nDesc : %d %d %d", num1, num3, num2);
            printf("\nAsc : %d %d %d", num2, num3, num1);
        }
    }
    else if ((num2 >= num1) && (num2 >= num3))
    {
        if (num1 >= num3)
        {
            printf("\nDesc : %d %d %d", num2, num1, num3);
        }
    }
    else
    {
        if (num2 >= num1)
        {
            printf("\nDesc : %d %d %d", num3, num2, num1);
            printf("\nAsc : %d %d %d", num1, num2, num3);
        }
        else
        {
            printf("\nDesc : %d %d %d", num3, num1, num2);
            printf("\nAsc : %d %d %d", num2, num1, num3);
        }
    }
    return 0;
}


// 13b. best practice >> Program to accept three numbers from user and print them in ascending and decending order (using if,else if & else).

#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter three numbers:");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 < num2 && num1 < num3) //if num1 is smaller than num2 and num3
    {
        printf("\n%d will be smallest", num1);
    }
    else if (num2 < num3 && num2 < num1) //if num2 is smaller than num3 and num1
    {
        printf("\n%d will be smallest", num2);
    }
    else
    {
        printf("\n%d will be smallest", num3);
    }

    return 0;
}