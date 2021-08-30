// 10. Program to accept roll number and marks of three subjects from user and print total marks, average and grade.

#include <stdio.h>

int main()
{
    float RollNum, m1, m2, m3, total, avg;

    printf("Enter Roll Number : ");
    scanf("%f", &RollNum);

    printf("Enter marks for three subjects : ");
    scanf("%f %f %f", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    avg = total / 3;

    printf("\nTotal is : %f", total);
    printf("\nAverage is : %f", avg);

    if (avg > 80)
        printf("\nGrade : A");
    else if ((avg > 60) && (avg <= 80))
        printf("\nGrade : B");
    else if ((avg > 40) && (avg <= 60))
        printf("\nGrade : C");
    else if ((avg >= 33) && (avg <= 40))
        printf("\nGrade : D");
    else
        printf("\nGrade : Fail");

    return 0;
}
