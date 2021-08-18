// 11. Program using multiple arthematic operator for genereal understanding using assigned values.

#include <stdio.h>

int main()
{
    int num1 = 10, num2 = 2;
    int sum, subtraction, multiplication, divison, remainder;

    sum = num1 + num2;
    printf("\nAddition of Numbers =  %d", sum);

    subtraction = num1 - num2;
    printf("\nSubtraction of Numbers = %d", subtraction);

    multiplication = num1 * num2;
    printf("\nMultiplication of Numbers = %d", multiplication);

    divison = num1 / num2;
    printf("\nDivision of Numbers = %d", divison);

    remainder = num1 % num2;
    printf("\nRemainder of Numbers = %d", remainder);

    return 0;
}