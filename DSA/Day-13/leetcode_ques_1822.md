# LeetCode Problem 1822: Sign of the Product of an Array

## 🚀 Problem Statement

You are given an integer array `nums`.  
Return:
- `1` if the product of all elements is **positive**,
- `-1` if the product is **negative**,
- `0` if **any** element is `0`.

> LeetCode Link: [1822. Sign of the Product of an Array](https://leetcode.com/problems/sign-of-the-product-of-an-array/)

---

##  My Initial Idea (What I Did Early)

My plan:
1. Loop through each number in the array.
2. If I found a `0`, I returned `0` immediately.
3. Otherwise, I counted how many negative numbers were present.
4. At the end, I used the count of negative numbers:
   - If the count is even → return `1` (positive product)
   - If the count is odd → return `-1` (negative product)

### Early Implementation:
```cpp
int neg_count = 0;
for (int i = 0; i < nums.size(); i++) {
    if (nums[i] == 0) return 0;
    else if (nums[i] < 0) neg_count++;
}
if (neg_count % 2 == 0) return 1;
else return -1;

🧠 What I Learned
How to determine the sign of a product without actually multiplying numbers.

How to optimize by checking for 0 early (shortcut).

Why counting negatives is a better approach than computing the full product.

Practiced using clean loop structure and ternary operators for clarity.


