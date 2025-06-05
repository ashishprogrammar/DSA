# LeetCode 94 - Binary Tree Inorder Traversal

## Problem Statement

Given the `root` of a binary tree, return the inorder traversal of its nodes' values.

**Inorder Traversal**:  
Left Subtree → Root → Right Subtree

---

## 🔍 Example

### Input:
1
 \
  2
 /
3

### Output:
[1, 3, 2]


---

## ✅ Approaches

### 1. Recursive Inorder Traversal

- Traverse the left subtree
- Visit the root node
- Traverse the right subtree

**Time Complexity**: `O(n)`  
**Space Complexity**: `O(n)` (Recursive stack)

### 2. Iterative Inorder Traversal (Using Stack)

- Use an explicit stack to simulate recursion.

**Time Complexity**: `O(n)`  
**Space Complexity**: `O(n)` (Stack)

---

## 📌 Key Concepts

- Binary Trees
- Depth First Search (DFS)
- Stack (for iterative approach)
- Tree Traversal

---

## 💡 Notes

- Recursive approach is easy to implement.
- Iterative is important for interviews to demonstrate stack usage.

---

## 🔗 Related Topics

- [x] Binary Tree Preorder Traversal
- [x] Binary Tree Postorder Traversal
- [ ] Morris Inorder Traversal (Advanced O(1) space)

---

## 🏷️ Tags

`Binary Tree` `DFS` `Inorder Traversal` `Stack` `Recursion`
