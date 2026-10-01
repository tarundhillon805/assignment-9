#include <stdio.h>

int sumOfDigits(int n) {
    int sum = 0;

    if (n < 0)
        n = -n;

    while (n > 0) {
        sum = sum + n % 10;
        n = n / 10;
    }

    return sum;
}

int countDigits(int n) {
    int count = 0;

    if (n < 0)
        n = -n;

    if (n == 0)
        return 1;

    while (n > 0) {
        count++;
        n = n / 10;
    }

    return count;
}

int reverseNumber(int n) {
    int reverse = 0;
    int digit;
    int sign = 1;

    if (n < 0) {
        sign = -1;
        n = -n;
    }

    while (n > 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    return reverse * sign;
}

int isPalindrome(int n) {
    if (n < 0)
        return 0;

    if (n == reverseNumber(n))
        return 1;
    else
        return 0;
}

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Sum of digits = %d\n", sumOfDigits(n));
    printf("Number of digits = %d\n", countDigits(n));
    printf("Reverse = %d\n", reverseNumber(n));

    if (isPalindrome(n))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}