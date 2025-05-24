# LeetCode 86 - Partition List

## 📝 Problem Statement

Given the head of a linked list and a value `x`, partition it such that **all nodes less than `x` come before nodes greater than or equal to `x`**.

You should preserve the **original relative order** of the nodes in each of the two partitions.

---

### 🔢 Example:

**Input:**
head = [1, 4, 3, 2, 5, 2], x = 3

**Output:**
[1, 2, 2, 4, 3, 5]


---

## 🚀 Approach

- Use **two dummy nodes** to create two separate lists:
  - One for nodes with values less than `x`
  - One for nodes with values greater than or equal to `x`
- Traverse the original list and add nodes to the respective lists.
- Connect the two lists together at the end.

---

## 🧠 Algorithm

1. Initialize two dummy nodes `beforeHead` and `afterHead`.
2. Use two pointers `before` and `after` to build the two lists.
3. Traverse the original list:
   - If the current node value is less than `x`, append it to the `before` list.
   - Otherwise, append it to the `after` list.
4. After traversal, terminate the `after` list with `nullptr`.
5. Link the end of the `before` list to the beginning of the `after` list.
6. Return the new head, which is `beforeHead->next`.

---

## 💻 Code (C++)

```cpp
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* beforeHead = new ListNode(0);
        ListNode* afterHead = new ListNode(0);

        ListNode* before = beforeHead;
        ListNode* after = afterHead;

        while (head) {
            if (head->val < x) {
                before->next = head;
                before = before->next;
            } else {
                after->next = head;
                after = after->next;
            }
            head = head->next;
        }

        after->next = nullptr; // Important to avoid cycle
        before->next = afterHead->next;

        return beforeHead->next;
    }
};
