## Problem: Best Time to Buy and Sell Stock (Easy-Medium)

**LeetCode:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach
I keep track of the minimum price seen so far and calculate the profit by selling at the current price. I update the maximum profit whenever a higher profit is found.

### Test Cases
1. `prices = [7,1,5,3,6,4]` → `5`
2. `prices = [7,6,4,3,1]` → `0`

### Time Complexity
O(n)

### Space Complexity
O(1)