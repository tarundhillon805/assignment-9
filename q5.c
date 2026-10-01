#include <stdio.h>

int totalMarks(int a, int b, int c, int d, int e)
{
    return a + b + c + d + e;
}

float percentage(int total)
{
    return total / 5.0;
}

char grade(float percentage)
{
    if (percentage >= 90)
        return 'A';
    else if (percentage >= 80)
        return 'B';
    else if (percentage >= 70)
        return 'C';
    else if (percentage >= 60)
        return 'D';
    else if (percentage >= 50)
        return 'E';
    else
        return 'F';
}

int passed(int a, int b, int c, int d, int e)
{
    if (a >= 40 && b >= 40 && c >= 40 && d >= 40 && e >= 40)
        return 1;
    else
        return 0;
}

int main()
{
    int m1, m2, m3, m4, m5;
    int total;
    float percent;
    char g;

    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = totalMarks(m1, m2, m3, m4, m5);
    percent = percentage(total);
    g = grade(percent);

    printf("Total = %d\n", total);
    printf("Percentage = %.2f%%\n", percent);
    printf("Grade = %c\n", g);

    if (passed(m1, m2, m3, m4, m5))
        printf("Result = Pass\n");
    else
        printf("Result = Fail\n");

    return 0;
}