// 6. To print gender (Male/Female) program according to given M/F via user

#include <stdio.h>

int main()
{
    char gender;

    printf("Enter gender (M/m or F/f): ");
    scanf("%c", &gender);

    switch (gender)
    {
    case 'M':
    case 'm':
        printf("Male");
        break;
    case 'F':
    case 'f':
        printf("Female");
        break;
    default:
        printf("Unspecified Gender\n");
    }

    return 0;
}