// 8. Convert Celcius degree temperature into Farhrenheit via assigned value

#include <stdio.h>

int main()
{
    float celsius = 37, fahr;

    fahr = (celsius * 9 / 5) + 32;

    printf("The value of this Celsius temperature in Fahrenheit is %f", fahr);

    return 0;
}