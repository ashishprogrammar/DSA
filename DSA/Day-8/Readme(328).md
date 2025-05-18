# ✅ Leetcode 328: Odd Even Linked List

### 🧠 Problem Statement
Given the `head` of a singly linked list, group all the nodes with **odd indices** together followed by the nodes with **even indices**, and return the reordered list.

> Note: Index refers to the **position in the list** (starting at 1), not the value of the node.

---

### 🔗 Problem Link
[Leetcode 328 - Odd Even Linked List](https://leetcode.com/problems/odd-even-linked-list/)

---

### ✨ Examples
Input: head = [1,2,3,4,5]
Output: [1,3,5,2,4]

Input: head = [2,1,3,5,6,4,7]
Output: [2,3,6,7,1,5,4]


---

### 📌 Constraints
- The number of nodes in the linked list is in the range [0, 10⁴].
- -10⁶ ≤ Node.val ≤ 10⁶
- The relative order inside both the odd and even groups should remain as in the input.

---

### 💡 Intuition
- Traverse the list and separate nodes based on their position (odd or even).
- Use one variable i for identifying odd and even node
- Link the even list at the end of the odd list after traversal.
