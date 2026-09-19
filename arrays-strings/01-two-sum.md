## Problem: Two Sum (Easy)

**LeetCode:** https://leetcode.com/problems/two-sum/

### Approach
I used a simple nested-loop approach. For each element, I check the remaining elements to find two numbers whose sum equals the target.

### Test Cases
1. `nums = [2,7,11,15], target = 9` → `[0,1]`
2. `nums = [3,3], target = 6` → `[0,1]`

### Time Complexity
O(n²)

### Space Complexity
O(1)