#include <stdio.h>
#include <string.h>

void reverseString(char s[])
{
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right)
    {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main()
{
    char str1[] = "hello";
    char str2[] = "Hannah";

    printf("Test Case 1: %s\n", str1);
    reverseString(str1);
    printf("Reversed: %s\n\n", str1);

    printf("Test Case 2: %s\n", str2);
    reverseString(str2);
    printf("Reversed: %s\n", str2);

    return 0;
}