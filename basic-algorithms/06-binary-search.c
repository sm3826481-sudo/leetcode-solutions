#include <stdio.h>

int binarySearch(int arr[], int n, int target)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    // Test Case 1
    int arr1[] = {1, 3, 5, 7, 9};
    int n1 = 5;
    int target1 = 5;

    printf("Test Case 1:\n");
    int result1 = binarySearch(arr1, n1, target1);
    printf("Target %d found at index: %d\n", target1, result1);

    // Test Case 2
    int arr2[] = {2, 4, 6, 8, 10};
    int n2 = 5;
    int target2 = 7;

    printf("\nTest Case 2:\n");
    int result2 = binarySearch(arr2, n2, target2);

    if (result2 == -1)
        printf("Target %d not found\n", target2);
    else
        printf("Target %d found at index: %d\n", target2, result2);

    return 0;
}