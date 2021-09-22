// 4. To print all strong numbers between 2 numbers
// What is a Strong number? -Strong number is a special number whose sum of the factorial of digits is equal to the original number

#include <stdio.h>
 
long long fact(int num);
void printStrongNumbers(int start, int end);
 
 
int main()
{
    int start, end;
 
    printf("Enter the lower limit: ");
    scanf("%d", &start);
    printf("Enter the upper limit: ");
    scanf("%d", &end);
 
    printf("List of strong numbers between %d to %d are: \n", start, end);
    printStrongNumbers(start, end);
 
    return 0;
}
 

// printing strong numbers in given range 
void printStrongNumbers(int start, int end)
{
    long long sum;
    int num;
 
    while(start != end)
    {
        sum = 0;
        num = start;
 
        while(num != 0)
        {
            sum += fact(num % 10);
            num /= 10;
        }
 
        if(start == sum)
        {
            printf("%d ", start);
        }
 
        start++;
    }
}
 
//Recursively finding factorial of any number
long long fact(int num)
{
    if(num == 0)
        return 1;
    else
        return (num * fact(num-1));
}
