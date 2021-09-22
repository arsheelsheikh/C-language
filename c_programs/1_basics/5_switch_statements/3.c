// 3. To create simple calculator using switch Statement

#include <stdio.h>

int main()
{
    float num1, num2;
    char opt;
    printf("Enter operators(+, -, *, /) : ");
    scanf("%c", &opt);
    printf("Enter two numbers: ");
    scanf("%f%f", &num1, &num2);
    switch (opt)
    {
    case '+':
        printf("The addition of %f and %f is: %f", num1, num2, num1 + num2);
        break;
    case '-':
        printf("The substraction of %f and %f is: %f", num1, num2, num1 - num2);
        break;
    case '*':
        printf("The multiplication of %f and %f is: %f", num1, num2, num1 * num2);
        break;
    case '/':
        printf("The division of %f and %f is: %f", num1, num2, num1 / num2);
        break;

    default:
        printf("opps...Invalid! Try again");
    }
    return 0;
}