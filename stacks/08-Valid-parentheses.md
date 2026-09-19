## Problem: Valid Parentheses

### Approach
Use a stack to check whether every opening bracket has a matching closing bracket in the correct order.

### Test Cases
1. `"()[]{}"` → `True`
2. `"([)]"` → `False`

### Time Complexity
O(n)

### Space Complexity
O(n)