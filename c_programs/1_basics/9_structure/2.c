// 2. Program to add two distances in inch-feet system using Structure

#include <stdio.h>
 
struct Distance
{
    int feet;
    float inch;
}
 
d1, d2, sum_of_Distances;
 
int main()
{
    printf("Enter information for 1st distance\n");
    printf("Enter feet: ");
    scanf("%d", &d1.feet);
    printf("Enter inch: ");
    scanf("%f", &d1.inch);
 
    printf("\nEnter information for 2nd distance\n");
    printf("Enter feet: ");
    scanf("%d", &d2.feet);
    printf("Enter inch: ");
    scanf("%f", &d2.inch);
 
 
    sum_of_Distances.feet = d1.feet+d2.feet;
    sum_of_Distances.inch = d1.inch+d2.inch;
 
 
    if (sum_of_Distances.inch>12.0)
    {
        sum_of_Distances.inch = sum_of_Distances.inch-12.0;
        ++sum_of_Distances.feet;
    }
 
    printf("\nSum of distances = %d\'-%.1f\"",sum_of_Distances.feet, sum_of_Distances.inch);
    return 0;
}