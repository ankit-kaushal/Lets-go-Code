class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
      bool check=false;
        ListNode *slowptr=head;
        ListNode *fastptr=head;
        while(fastptr!=NULL && fastptr->next!=NULL)
        {
            slowptr=slowptr->next;
            fastptr=fastptr->next->next;
            if(slowptr ==fastptr )
            {
                check=true;
                break;
            }
        }
        if(check==false)
            return NULL;
        slowptr=head;
         // fastptr=head;
        while(slowptr!=fastptr)
        {
            slowptr=slowptr->next;
            fastptr=fastptr->next;
        }
        return slowptr;
    }
};