// 4. To check even or odd number using switch case via user 

#include <stdio.h>

int main()
{
    int num;

    printf("Enter any number to check even or odd: ");
    scanf("%d", &num);

    switch (num % 2)
    {
    //If n%2 == 0
    case 0:
        printf("Number is even");
        break;

    //Else if n%2 == 1
    case 1:
        printf("Number is odd");
        break;
    }

    return 0;
}