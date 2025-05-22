# LeetCode Problem 2807 - Insert Greatest Common Divisors in Linked List

## 🔗 Problem Link
[LeetCode #2807 - Insert Greatest Common Divisors in Linked List](https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/)

---

## 🧩 Problem Statement

Given the `head` of a singly linked list of positive integers, insert a new node between every pair of adjacent nodes. The value of the new node should be the **greatest common divisor (GCD)** of the values of the two adjacent nodes.

Return the **head** of the modified linked list.

---

## ✅ Example

### Input:
head = [18, 6, 12]

### Output:
[18, 6, 6, 6, 12]


### Explanation:
- Between 18 and 6, insert GCD(18, 6) = 6
- Between 6 and 12, insert GCD(6, 12) = 6

---

## 💡 Approach

We use a **two-pointer in-place traversal** to insert a new node between every adjacent node in the list. The value of the inserted node is calculated using the **Euclidean algorithm** for GCD.

### ✅ Key Points:
- Traverse the list with two pointers (`curr` and `front`).
- For each adjacent pair, compute the GCD.
- Create a new node with this GCD and insert it between `curr` and `front`.
- Continue until the end of the list is reached.
- Time Complexity: **O(n log M)**, where `n` is the number of nodes and `M` is the average value of the node values.
- Space Complexity: **O(1)** auxiliary space (excluding the new nodes).

---

## 🧠 Code (C++)

```cpp
// Euclidean algorithm to compute GCD
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

ListNode* insertGreatestCommonDivisors(ListNode* head) {
    if (head == NULL || head->next == NULL) return head;

    ListNode* curr = head;
    while (curr->next != NULL) {
        int data = gcd(curr->val, curr->next->val);
        ListNode* temp = new ListNode(data);
        temp->next = curr->next;
        curr->next = temp;
        curr = temp->next; // move to next original node
    }
    return head;
}
