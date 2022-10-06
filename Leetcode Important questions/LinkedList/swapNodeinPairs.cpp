class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
      ListNode* newnode=new ListNode(-1);
        newnode->next=head;
      ListNode*prev=newnode;
      ListNode*current=head;
       
        while(current!=NULL && current->next!=NULL)
        {
            prev->next=current->next;
            current->next=prev->next->next;
            prev->next->next=current;
            current=current->next;
            prev=prev->next->next;
        }
        return newnode->next;
    }
};