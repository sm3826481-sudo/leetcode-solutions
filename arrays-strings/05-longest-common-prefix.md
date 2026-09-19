## Problem: Longest Common Prefix

### Approach
Find the common starting characters among all the given strings.
Compare the characters one by one and stop when they are different.

### Test Cases
1. `["flower", "flow", "flight"]` → `"fl"`
2. `["dog", "racecar", "car"]` → `""`

### Time Complexity
O(n × m)

### Space Complexity
O(1)