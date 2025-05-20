# LeetCode 319 - Bulb Switcher

## Problem
There are `n` bulbs that are initially off. You toggle them in a pattern over `n` rounds.

Return the number of bulbs that remain on after `n` rounds.

## Key Insight
- A bulb is toggled each time it is a multiple of a round number.
- Only perfect square numbers have an odd number of divisors.
- Therefore, the number of bulbs that remain on equals the number of perfect squares ≤ n.

## Example

Input: n = 10
Output: 3
Explanation: Bulbs 1, 4, and 9 remain on.


## Time Complexity: O(1)
## Space Complexity: O(1)

