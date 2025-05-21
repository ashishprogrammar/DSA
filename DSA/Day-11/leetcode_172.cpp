// LeetCode 172: Factorial Trailing Zeroes
// Solving with Brute Force Approach
class Solution {
public:
    // Recursive factorial function (long long)
    long long factorial(int n) {
        if (n <= 1) return 1;
        return n * factorial(n - 1);
    }

    int trailingZeroes(int n) {
        long long fact = factorial(n);  // may overflow for n > 20

        int count = 0;
        while (fact % 10 == 0) {
            count++;
            fact /= 10;
        }
        return count;
    }
};
// So More Optimed approach


// Optimized solution: O(log n)

class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;
        while (n >= 5) {
            n /= 5;
            count += n;
        }
        return count;
    }
};
