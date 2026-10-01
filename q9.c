#include <stdio.h>

void analyze(int *arr, int n, int *smallest, int *secondSmallest,
            int *greatest, int *secondGreatest, int *countDistinct)
{
    int i;
    int hasSecondSmallest = 0;
    int hasSecondGreatest = 0;

    *smallest = arr[0];
    *greatest = arr[0];
    *countDistinct = 1;

    for (i = 1; i < n; i++)
    {
        // Find smallest and second-smallest
        if (arr[i] < *smallest)
        {
            *secondSmallest = *smallest;
            *smallest = arr[i];
            hasSecondSmallest = 1;
        }
        else if (arr[i] > *smallest)
        {
            if (!hasSecondSmallest || arr[i] < *secondSmallest)
            {
                *secondSmallest = arr[i];
                hasSecondSmallest = 1;
            }
        }

        // Find greatest and second-greatest
        if (arr[i] > *greatest)
        {
            *secondGreatest = *greatest;
            *greatest = arr[i];
            hasSecondGreatest = 1;
        }
        else if (arr[i] < *greatest)
        {
            if (!hasSecondGreatest || arr[i] > *secondGreatest)
            {
                *secondGreatest = arr[i];
                hasSecondGreatest = 1;
            }
        }
    }

    if (hasSecondSmallest)
        *countDistinct = 2;
    else
        *countDistinct = 1;
}

int main()
{
    int arr[100];
    int n, i;

    int smallest, secondSmallest;
    int greatest, secondGreatest;
    int countDistinct;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    analyze(arr, n, &smallest, &secondSmallest,
            &greatest, &secondGreatest, &countDistinct);

    if (countDistinct < 2)
    {
        printf("Fewer than two distinct values exist.\n");
    }
    else
    {
        printf("Smallest = %d\n", smallest);
        printf("Second-smallest = %d\n", secondSmallest);
        printf("Greatest = %d\n", greatest);
        printf("Second-greatest = %d\n", secondGreatest);
    }

    return 0;
}