#include <stdio.h>

void twoSum(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                printf("Indices: [%d, %d]\n", i, j);
                return;
            }
        }
    }

    printf("No pair found\n");
}

int main()
{
    // Test Case 1: Typical case
    int arr1[] = {2, 7, 11, 15};
    int target1 = 9;

    printf("Test Case 1:\n");
    twoSum(arr1, 4, target1);

    // Test Case 2: Edge case with duplicate values
    int arr2[] = {3, 3};
    int target2 = 6;

    printf("Test Case 2:\n");
    twoSum(arr2, 2, target2);

    return 0;
}