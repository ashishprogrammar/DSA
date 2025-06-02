# LeetCode 32 - Longest Valid Parentheses

## Problem Statement

Given a string containing just the characters `'('` and `')'`, return the length of the longest valid (well-formed) parentheses substring.

### Examples

- Input: `"(()"`  
  Output: `2`

- Input: `")()())"`  
  Output: `4`

- Input: `""`  
  Output: `0`

---

## 🧠 Solution Explanation

### 🔹 Stack-Based C++ Approach

This method uses a stack to keep track of the index of unmatched `'('`. When a matching `')'` is found, the stack is popped, and the length of the current valid substring is calculated.

### 💻 Code (C++)

```cpp
class Solution {
public:
    int longestValidParentheses(std::string s) {
        std::stack<int> stack;
        stack.push(-1);
        int maxLength = 0;

        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '(') {
                stack.push(i);
            } else {
                stack.pop();
                if (stack.empty()) {
                    stack.push(i);
                } else {
                    maxLength = std::max(maxLength, i - stack.top());
                }
            }
        }
        return maxLength;
    }
};
⏱️ Time & Space Complexity

Time Complexity: O(n)
Space Complexity: O(n)
