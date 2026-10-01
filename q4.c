#include <stdio.h>

// Function to calculate GCD of two numbers
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate GCD of three numbers
int gcdThree(int a, int b, int c)
{
    return gcd(gcd(a, b), c);
}

// Function to calculate LCM of two numbers
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

// Function to calculate LCM of three numbers
int lcmThree(int a, int b, int c)
{
    return lcm(lcm(a, b), c);
}

int main()
{
    int a, b, c;

    printf("Enter three positive integers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("GCD = %d\n", gcdThree(a, b, c));
    printf("LCM = %d\n", lcmThree(a, b, c));

    return 0;
}