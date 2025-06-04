# LeetCode 225 - Implement Stack using Queues

## 🧠 Problem Statement

Implement a **Last-In-First-Out (LIFO)** stack using only **queues**.

You must only use standard operations of a queue:
- `push to back`
- `peek/pop from front`
- `size`
- `is empty`

---

## 🚀 Approach

We use **one queue** to simulate stack behavior. Every time we push a new element, we:
1. Push it to the queue.
2. Rotate the existing elements to the back to maintain **LIFO** order.

This ensures the **most recent element is always at the front** of the queue.

---

## 📂 File Structure

- `MyStack.cpp` – Contains the full class implementation and test cases.
- `README.md` – You’re here!

---

## 📌 Methods Implemented

| Method  | Description |
|---------|-------------|
| `push(x)` | Push element `x` onto the stack. |
| `pop()`   | Removes and returns the top element. |
| `top()`   | Returns the top element without removing it. |
| `empty()` | Returns whether the stack is empty. |

---

## 🔧 Sample Output
Top element: 2
Pop: 2
Is empty? No
Pop: 1
Is empty? Yes
