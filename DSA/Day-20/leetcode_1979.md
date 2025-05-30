# LeetCode 1979: Find Greatest Common Divisor of Array

## 🧠 Problem Statement

Given an integer array `nums`, return the **greatest common divisor (GCD)** of the smallest and largest number in `nums`.

The **greatest common divisor** of two numbers is the largest positive integer that evenly divides both numbers.

---

## ✅ Example

### Input:
```cpp
nums = [2, 5, 6, 9, 10]

### Output:
2

💡 Approach
Find the minimum and maximum elements in the array.

Use the Euclidean algorithm to compute the GCD of those two values.(using recursion)
