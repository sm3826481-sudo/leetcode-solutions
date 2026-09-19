#include <stdio.h>
#include <string.h>

int isAnagram(char str1[], char str2[])
{
    int count[256] = {0};

    if (strlen(str1) != strlen(str2))
        return 0;

    for (int i = 0; str1[i] != '\0'; i++)
    {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }

    for (int i = 0; i < 256; i++)
    {
        if (count[i] != 0)
            return 0;
    }

    return 1;
}

int main()
{
    // Test Case 1: Typical case
    char str1[] = "anagram";
    char str2[] = "nagaram";

    printf("Test Case 1: %s, %s\n", str1, str2);

    if (isAnagram(str1, str2))
        printf("Result: True\n");
    else
        printf("Result: False\n");


    // Test Case 2: Not an anagram
    char str3[] = "rat";
    char str4[] = "car";

    printf("\nTest Case 2: %s, %s\n", str3, str4);

    if (isAnagram(str3, str4))
        printf("Result: True\n");
    else
        printf("Result: False\n");

    return 0;
}