class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        // Create a dummy node to simplify edge cases
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;

        while (head) {
            // If there's a duplicate sequence
            if (head->next && head->val == head->next->val) {
                // Skip all nodes with the same value
                while (head->next && head->val == head->next->val) {
                    head = head->next;
                }
                // Link prev to the node after the duplicates
                prev->next = head->next;
            } else {
                prev = prev->next; // No duplicates, just move prev
            }
            head = head->next; // Move forward
        }

        return dummy->next;
    }
};
