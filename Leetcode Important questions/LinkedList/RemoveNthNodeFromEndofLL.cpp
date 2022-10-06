class Solution {
public:
    int sizeget(ListNode*head)
    {
        int ctr=0;
        ListNode*head1=head; 
        while(head1!=NULL)
        {
            ctr++;
            head1=head1->next;
        }
        return ctr;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int size=sizeget(head);
         ListNode*head1=head;
        ListNode*temp;
        int ctr=0;
        if(size==n)
            return head->next;
        while(head1!=NULL)
        {
            if(ctr==size-n-1)
            {
                break;
            }
            ctr++;
            head1=head1->next;
        }
        
            temp=head1->next;
        head1->next=temp->next;
        
       return head; 
    }
};