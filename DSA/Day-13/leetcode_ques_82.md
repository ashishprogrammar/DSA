# LeetCode Problem 82: Remove Duplicates from Sorted List II

## 🚀 Problem Statement

Given the `head` of a sorted linked list, delete all nodes that have duplicate numbers, leaving only **distinct** numbers from the original list. Return the linked list **sorted** as well.

> LeetCode Link: [Problem 82](https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/)

---

## ❌ Initial Attempt (What I Did Early)

In my early approach, I attempted to:
- Traverse the linked list
- Remove consecutive duplicate values using basic comparisons
- However, I failed to correctly **remove all occurrences of duplicate values**
- My logic retained one instance of duplicates instead of **completely deleting** them

### Flawed logic:
```cpp
if (head->val == head->next->val) {
    head->next = head->next->next;
}

✅ Final Correct Approach (What I Learned)
Key Concepts:
Use a dummy node at the start to handle edge cases (like removing the head).

Use two pointers:

prev to track the last node before the duplicates

head to scan ahead and detect duplicates

If duplicates are found, skip all nodes with the same value using a loop.

🧠 What I Learned
How to use a dummy node to handle corner cases in linked list problems.

The importance of skipping all duplicates, not just removing one.

Efficient use of pointers to manage node deletions.

Improved my understanding of edge cases like when duplicates appear at the start or end.

