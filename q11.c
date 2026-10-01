#include <stdio.h>

void analyzeString(char *str, int *vowels, int *consonants,
                   int *digits, int *spaces, int *special)
{
    *vowels = 0;
    *consonants = 0;
    *digits = 0;
    *spaces = 0;
    *special = 0;

    while (*str != '\0')
    {
        // Check for vowels
        if (*str == 'a' || *str == 'A' ||
            *str == 'e' || *str == 'E' ||
            *str == 'i' || *str == 'I' ||
            *str == 'o' || *str == 'O' ||
            *str == 'u' || *str == 'U')
        {
            (*vowels)++;
        }

        // Check for consonants
        else if ((*str >= 'a' && *str <= 'z') ||
                 (*str >= 'A' && *str <= 'Z'))
        {
            (*consonants)++;
        }

        // Check for digits
        else if (*str >= '0' && *str <= '9')
        {
            (*digits)++;
        }

        // Check for spaces
        else if (*str == ' ')
        {
            (*spaces)++;
        }

        // Everything else is special character
        else
        {
            (*special)++;
        }

        str++;
    }
}

int main()
{
    char str[200];
    int vowels, consonants, digits, spaces, special;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    analyzeString(str, &vowels, &consonants,
                  &digits, &spaces, &special);

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Digits = %d\n", digits);
    printf("Spaces = %d\n", spaces);
    printf("Special characters = %d\n", special);

    return 0;
}