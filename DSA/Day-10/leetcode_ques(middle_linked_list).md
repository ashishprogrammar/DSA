# LeetCode 2095 - Delete the Middle Node of a Linked List

## Problem
Given the head of a singly linked list, delete the middle node, and return the head of the modified list.

The middle node is defined as the ⌊n / 2⌋th node.

## Example

Input: head = [1,3,4,7,1,2,6]
Output: [1,3,4,1,2,6]

## Solution Approach
- Use the two-pointer method (slow & fast) to find the middle.
- Keep track of the node before the middle to update the next pointer.
- Handle edge case for a single-node list.

## Time Complexity: O(n)
## Space Complexity: O(1)
