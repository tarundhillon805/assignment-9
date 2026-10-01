#include <stdio.h>

void checkEvenOdd(int n) {
    if (n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}

void checkPositiveNegative(int n) {
    if (n > 0)
        printf("Positive\n");
    else if (n < 0)
        printf("Negative\n");
    else
        printf("Zero\n");
}

void checkPrime(int n) {
    int i, prime = 1;

    if (n <= 1) {
        prime = 0;
    } else {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                prime = 0;
                break;
            }
        }
    }

    if (prime == 1)
        printf("Prime\n");
    else
        printf("Not Prime\n");
}

void checkPerfect(int n) {
    int i, sum = 0;

    if (n <= 0) {
        printf("Not Perfect\n");
        return;
    }

    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == n)
        printf("Perfect\n");
    else
        printf("Not Perfect\n");
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\nClassification Report:\n");

    printf("Even/Odd: ");
    checkEvenOdd(n);

    printf("Positive/Negative/Zero: ");
    checkPositiveNegative(n);

    printf("Prime: ");
    checkPrime(n);

    printf("Perfect: ");
    checkPerfect(n);

    return 0;
}