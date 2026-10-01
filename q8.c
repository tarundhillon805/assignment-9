#include <stdio.h>

void display(int *arr, int n)
{
    int i;

    printf("Array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

void insert(int *arr, int *n, int position, int value)
{
    int i;

    for (i = *n; i > position; i--)
    {
        *(arr + i) = *(arr + i - 1);
    }

    *(arr + position) = value;
    (*n)++;
}

int deleteElement(int *arr, int *n, int position)
{
    int i;
    int deleted;

    deleted = *(arr + position);

    for (i = position; i < *n - 1; i++)
    {
        *(arr + i) = *(arr + i + 1);
    }

    (*n)--;

    return deleted;
}

int main()
{
    int arr[100];
    int n, i;
    int choice, position, value, deleted;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\n--- MENU ---\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                display(arr, n);
                break;

            case 2:
                printf("Enter position (0 to %d): ", n);
                scanf("%d", &position);

                printf("Enter value: ");
                scanf("%d", &value);

                if (position >= 0 && position <= n)
                {
                    insert(arr, &n, position, value);
                    printf("Element inserted successfully.\n");
                }
                else
                {
                    printf("Invalid position.\n");
                }
                break;

            case 3:
                if (n == 0)
                {
                    printf("Array is empty.\n");
                    break;
                }

                printf("Enter position (0 to %d): ", n - 1);
                scanf("%d", &position);

                if (position >= 0 && position < n)
                {
                    deleted = deleteElement(arr, &n, position);
                    printf("Deleted element = %d\n", deleted);
                }
                else
                {
                    printf("Invalid position.\n");
                }
                break;

            case 4:
                printf("Program ended.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}