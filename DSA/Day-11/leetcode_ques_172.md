# LeetCode 172 – Factorial Trailing Zeroes

📌 [View Problem on LeetCode](https://leetcode.com/problems/factorial-trailing-zeroes/)

## 🧾 Problem Statement

Given an integer `n`, return the number of trailing zeroes in `n!`.

Trailing zeroes are produced by factors of 10, which come from multiplying 2 × 5. Since factorials always have more 2s than 5s, the number of trailing zeroes is determined by the number of times 5 is a factor in `n!`.

---

## 🧠 Approaches

### 🚫 1. Recursive Brute Force (Overflow Risk)

#### 🔍 Idea:
- Recursively compute the factorial of `n`
- Count trailing zeroes by dividing the factorial by 10 repeatedly

#### ⚠️ Limitation:
- `long long` overflows for `n > 20` due to the size of factorials  
  e.g. `21! = 51090942171709440000` > `long long` max (≈ 9e18)

#### ✅ Code:
```cpp
class Solution {
public:
    long long factorial(int n) {
        if (n <= 1) return 1;
        return n * factorial(n - 1);
    }

    int trailingZeroes(int n) {
        long long fact = factorial(n);  // May overflow for n > 20
        int count = 0;
        while (fact % 10 == 0) {
            count++;
            fact /= 10;
        }
        return count;
    }
};
