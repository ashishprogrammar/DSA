# LeetCode 1249 - Minimum Remove to Make Valid Parentheses

## 🔗 Problem Link
[LeetCode 1249 - Minimum Remove to Make Valid Parentheses](https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/)

---

## 🧩 Problem Statement

Given a string `s` of `'('`, `')'`, and lowercase English characters, your task is to remove the **minimum number** of invalid parentheses to make the input string valid.

Return the resulting valid string. It can be **any** valid output.

---

### 🧪 Examples

#### Example 1:
  Input: s = "lee(t(c)o)de)"
  Output: "lee(t(c)o)de"
#### Example 2:
  Input: s = "a)b(c)d"
  Output: "ab(c)d"

  ## ✅ Approach: Stack + String (Efficient & Clean)

### 🔍 Idea:
- Use a **stack** to track the indices of unmatched `'('`.
- Traverse the string:
  - Push `'('` indices into the stack.
  - When you see `')'`, pop from the stack if there's a matching `'('`. Otherwise, mark this `')'` for removal.
- After the loop, any indices left in the stack are unmatched `'('`. Mark those for removal.
- Build the final result string by skipping the marked characters.

### 🧠 Time and Space Complexity
- **Time Complexity:** `O(n)` — One pass to process the string and one to build the result.
- **Space Complexity:** `O(n)` — In the worst case, the stack stores all `(` characters.

---
