## Problem: Reverse String (Easy)

**LeetCode:** https://leetcode.com/problems/reverse-string/

### Approach
I used the two-pointer technique. One pointer starts from the beginning and another from the end. I swap the characters and move both pointers toward the center.

### Test Cases
1. `s = ["h","e","l","l","o"]` → `["o","l","l","e","h"]`
2. `s = ["H","a","n","n","a","h"]` → `["h","a","n","n","a","H"]`

### Time Complexity
O(n)

### Space Complexity
O(1)