//swaaping the nodes not values
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        int count=0;
        ListNode* temp=head;
        while(temp){
            temp=temp->next;
            count++;
        }
        //edge case
        if(k>count||!head) return head;
        //First reach to the kth Node
        ListNode* prev1 =NULL;
        ListNode* first = head;
        int i=1;
        while(i<k){
            prev1=first;
            first=first->next;
            i++;
        }
        i=1;
        //Now reach to the count-k
        ListNode* prev2=NULL;
        ListNode* second=head;
        while(i<(count-k+1)){
            prev2=second;
            second=second->next;
            i++;
        }

        // Step 4: If first and second are the same, no need to swap
        if (first == second) return head;

        // now adjust previous nodes to point to the opposite node
        if (prev1) prev1->next=second;
        else head=second;

        if(prev2) prev2->next=first;
        else head=first;

        //swap the next pointers of first and second
        ListNode* tempNext = first->next;
        first->next=second->next;
        second->next=tempNext;
        return head;
    }
      
