## Problem: Valid Anagram (Easy)

**LeetCode:** https://leetcode.com/problems/valid-anagram/

### Approach
I used a character frequency array to count how many times each character appears in both strings. If all frequencies match, the strings are anagrams.

### Test Cases
1. `s = "anagram", t = "nagaram"` → `true`
2. `s = "rat", t = "car"` → `false`

### Time Complexity
O(n)

### Space Complexity
O(1)