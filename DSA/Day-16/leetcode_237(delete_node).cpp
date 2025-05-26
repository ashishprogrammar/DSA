class Solution {
public:
    void deleteNode(ListNode* node) {
        // Copy the value of the next node into the current node
        node->val = node->next->val;
        // Skip the next node
        ListNode* temp = node->next;
        node->next = node->next->next;
        delete temp; // Free memory of the deleted node
    }
};
