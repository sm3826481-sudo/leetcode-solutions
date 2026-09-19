#include <stdio.h>

void moveZeroes(int arr[], int n)
{
    int pos = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[pos] = arr[i];
            pos++;
        }
    }

    // Fill the remaining positions with zero
    while (pos < n)
    {
        arr[pos] = 0;
        pos++;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    // Test Case 1
    int arr1[] = {0, 1, 0, 3, 12};
    int n1 = 5;

    printf("Test Case 1:\n");
    printf("Before: ");
    printArray(arr1, n1);

    moveZeroes(arr1, n1);

    printf("After:  ");
    printArray(arr1, n1);

    // Test Case 2
    int arr2[] = {0, 0, 1, 2, 0};
    int n2 = 5;

    printf("\nTest Case 2:\n");
    printf("Before: ");
    printArray(arr2, n2);

    moveZeroes(arr2, n2);

    printf("After:  ");
    printArray(arr2, n2);

    return 0;
}