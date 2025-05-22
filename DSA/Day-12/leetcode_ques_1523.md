# LeetCode Problem 1523 – Count Odd Numbers in an Interval Range

## 🔗 Problem Link
[LeetCode #1523 - Count Odd Numbers in an Interval Range](https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/)

---

## 🧩 Problem Statement

Given two non-negative integers `low` and `high`, return the **count of odd numbers** between `low` and `high` (inclusive).

---

## 🧪 Example

### Input:
low = 3, high = 7

### Output:
3


### Explanation:
Odd numbers in the range [3, 7] are: 3, 5, 7 → total count = 3

---

## 🛠️ Brute-Force Approach

### 👣 Steps:
- Use a `while` loop from `low` to `high`.
- For each number, check if it’s odd (`n % 2 != 0`).
- Maintain a counter to track odd numbers.

### 🔁 Time Complexity:
- **O(high - low + 1)**

### 🧠 Space Complexity:
- **O(1)**

---

## 🚀 Optimized Approach

### 👣 Steps:
- Every 2 numbers include 1 odd number.
- Total count of odd numbers = `(high - low) / 2`
- If either `low` or `high` is odd → add 1
