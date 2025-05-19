🔢 Problem 400: Nth Digit
Link: LeetCode 400

Problem Statement:

Find the n-th digit in the infinite sequence of integers:
1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, ...

Input Example:
n = 11

Output:
0

Explanation:
The sequence up to 11 looks like:
1 2 3 4 5 6 7 8 9 1 0 1 1...
The 11th digit is 0 (from the number 10).

Approach Used:

Identify the length of numbers that the n-th digit falls into (1-digit, 2-digit, etc.).

Calculate the starting number of that digit group.

Locate the exact number and the digit within that number using integer math.

Why this approach?
This optimized method prevents generating the entire sequence and directly computes the result using digit ranges and arithmetic.

