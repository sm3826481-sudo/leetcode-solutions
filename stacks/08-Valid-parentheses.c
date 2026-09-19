#include <stdio.h>
#include <string.h>

int isValid(char str[])
{
    char stack[100];
    int top = -1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if (ch == '(' || ch == '[' || ch == '{')
        {
            stack[++top] = ch;
        }
        else
        {
            if (top == -1)
                return 0;

            char open = stack[top--];

            if ((ch == ')' && open != '(') ||
                (ch == ']' && open != '[') ||
                (ch == '}' && open != '{'))
            {
                return 0;
            }
        }
    }

    return top == -1;
}

int main()
{
    char str1[] = "()[]{}";
    char str2[] = "([)]";

    printf("Test Case 1: %s\n", str1);

    if (isValid(str1))
        printf("Result: True\n");
    else
        printf("Result: False\n");

    printf("\nTest Case 2: %s\n", str2);

    if (isValid(str2))
        printf("Result: True\n");
    else
        printf("Result: False\n");

    return 0;
}