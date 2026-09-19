#include <stdio.h>
#include <string.h>

void longestCommonPrefix(char *strs[], int n)
{
    char prefix[100];
    int i, j;

    strcpy(prefix, strs[0]);

    for (i = 1; i < n; i++)
    {
        j = 0;

        while (prefix[j] != '\0' &&
               strs[i][j] != '\0' &&
               prefix[j] == strs[i][j])
        {
            j++;
        }

        prefix[j] = '\0';

        if (prefix[0] == '\0')
        {
            break;
        }
    }

    printf("Longest Common Prefix: %s\n", prefix);
}

int main()
{
    // Test Case 1: Common prefix
    char *strs1[] = {"flower", "flow", "flight"};

    printf("Test Case 1:\n");
    longestCommonPrefix(strs1, 3);

    // Test Case 2: No common prefix
    char *strs2[] = {"dog", "racecar", "car"};

    printf("\nTest Case 2:\n");
    longestCommonPrefix(strs2, 3);

    return 0;
}