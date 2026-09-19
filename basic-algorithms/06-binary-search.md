## Problem: Binary Search

### Approach
Use binary search to find the target element in a sorted array.
Compare the target with the middle element and reduce the search range.

### Test Cases
1. `[1, 3, 5, 7, 9]`, target = `5` → index `2`
2. `[1, 3, 5, 7, 9]`, target = `7` → index `3`

### Time Complexity
O(log n)

### Space Complexity
O(1)