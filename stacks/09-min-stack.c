#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value)
{
    stack[++top] = value;
}

int pop()
{
    return stack[top--];
}

int getMin()
{
    int min = stack[0];

    for (int i = 1; i <= top; i++)
    {
        if (stack[i] < min)
            min = stack[i];
    }

    return min;
}

int main()
{
    printf("Test Case 1:\n");

    push(5);
    push(3);
    push(7);
    push(2);

    printf("Minimum: %d\n", getMin());

    pop();

    printf("After pop, Minimum: %d\n", getMin());

    return 0;
}