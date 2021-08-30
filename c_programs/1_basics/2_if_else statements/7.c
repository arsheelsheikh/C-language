// 7. Program to find weather entered alphabet by user is vowel or consonent (using if, else if and else).

#include<stdio.h>

int main()
{
    char c;

    printf("\nEnter the alphabet : ");
    scanf("%c", &c);

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        printf("\n%c is a vowel\n", c);
    }
    else if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        printf("%c is a vowel\n", c);
    }
    else
    {
        printf("%c is a consonent\n", c);
    }

    return 0;
}