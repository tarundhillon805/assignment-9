#include <stdio.h>

void arithmetic(int a, int b, int *sum, int *diff, int *product, float *quotient)
{
    *sum = a + b;
    *diff = a - b;
    *product = a * b;

    if (b != 0)
        *quotient = (float)a / b;
    else
        *quotient = 0;
}

int main()
{
    int a, b;
    int sum, diff, product;
    float quotient;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    arithmetic(a, b, &sum, &diff, &product, &quotient);

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product = %d\n", product);

    if (b != 0)
        printf("Quotient = %.2f\n", quotient);
    else
        printf("Quotient = Division by zero not possible\n");

    return 0;
}