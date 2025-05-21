// LeetCode 19: Remove Nth Node From End of List
// Approach: Two-pass algorithm using count

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // First pass: count total number of nodes
        int count = 0;
        ListNode* temp = head;
        while (temp) {
            count++;
            temp = temp->next;
        }

        // Find the position from the beginning (0-based)
        count -= n;

        // If removing the head node
        if (count == 0) {
            temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        // Second pass: traverse to node before the target
        ListNode* prev = NULL;
        ListNode* curr = head;
        while (count--) {
            prev = curr;
            curr = curr->next;
        }

        // Delete the target node
        prev->next = curr->next;
        delete curr;

        return head;
    }
};
