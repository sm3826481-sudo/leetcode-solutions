#include <stdio.h>

int maxProfit(int prices[], int n)
{
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++)
    {
        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
        }

        int profit = prices[i] - minPrice;

        if (profit > maxProfit)
        {
            maxProfit = profit;
        }
    }

    return maxProfit;
}

int main()
{
    // Test Case 1: Typical case
    int prices1[] = {7, 1, 5, 3, 6, 4};

    printf("Test Case 1: ");
    printf("Maximum Profit = %d\n", maxProfit(prices1, 6));

    // Test Case 2: No profit possible
    int prices2[] = {7, 6, 4, 3, 1};

    printf("Test Case 2: ");
    printf("Maximum Profit = %d\n", maxProfit(prices2, 5));

    return 0;
}