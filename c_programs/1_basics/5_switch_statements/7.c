//  8. To find maximum number using switch case via user

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter two numbers to find maximum number: ");
    scanf("%d%d", &num1, &num2);

    switch (num1 > num2)
    {
    case 0:
        printf("%d is Maximum number", num2);
        break;

    case 1:
        printf("%d is Maximum number", num1);
        break;
    }

    return 0;
}