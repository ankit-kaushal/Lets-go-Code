class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
     ListNode*head1=head;
        while(head!=NULL && head->next!=NULL)
        {
            if(head->val==head->next->val)
            {
                head->next=head->next->next;
                
            }
            else
            {
                head=head->next;
            }
            
        }
        return head1;
    }
};