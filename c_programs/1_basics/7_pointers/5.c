// 4. To print the value and address of the elements of an array

#include <stdio.h>

int main()
{
    int arr[5];
    int i;
    printf("Enter the array 5 elements : ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nArray elements with their addresses :: \n");
    for (i = 0; i < 5; i++)
    {
        printf("Value of arr[%d] = %d\t", i, arr[i]);
        printf("Address of arr[%d] = %p\n", i, &arr[i]);
    }
    return 0;
}