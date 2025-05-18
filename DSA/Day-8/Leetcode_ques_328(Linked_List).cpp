struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* oddEvenList(ListNode* head) {
    if (!head) return head;

    ListNode* odd = new ListNode(0);  // dummy node for odd
    ListNode* even = new ListNode(0); // dummy node for even
    ListNode *oddhead = odd, *evenhead = even;

    int i = 1;
    ListNode* curr = head;
    
    while (curr) {
        if (i % 2 == 1) {
            odd->next = curr;
            odd = odd->next;
        } else {
            even->next = curr;
            even = even->next;
        }
        curr = curr->next;
        i++;
    }

    even->next = nullptr; // Terminate even list

    // Free dummy nodes
    ListNode* temp = oddhead;
    oddhead = oddhead->next;
    delete temp;

    ListNode* temp2 = evenhead;
    evenhead = evenhead->next;
    delete temp2;

    odd->next = evenhead; // Connect odd to even
    return oddhead;
}
