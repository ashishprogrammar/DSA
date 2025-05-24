struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* beforeHead = new ListNode(0);  // Dummy head for nodes < x
        ListNode* afterHead = new ListNode(0);   // Dummy head for nodes >= x

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
