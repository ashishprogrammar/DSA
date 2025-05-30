# LeetCode 150: Evaluate Reverse Polish Notation

## 🧠 Problem Statement

Evaluate the value of an arithmetic expression in Reverse Polish Notation (RPN). Valid operators are `+`, `-`, `*`, and `/`. Each operand may be an integer or another expression.

**Note:** Division between two integers should truncate toward zero.

---

## ✅ Example

### Input:
```cpp
["2", "1", "+", "3", "*"]

### Output:
9

### Explanation:
(2 + 1) * 3 = 9

💡 Approach
We use a stack to evaluate the postfix expression:

Traverse each token:

If it's a number, push it onto the stack.

If it's an operator, pop the top two numbers from the stack, apply the operator, and push the result back.

At the end, the stack will have the final result.
