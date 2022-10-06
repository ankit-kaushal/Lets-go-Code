class Solution {
public:
    int lengthoflinkedlist(ListNode* head)
    {
        if(head==NULL)
            return 0;
        else
            return 1+lengthoflinkedlist(head->next);
    }
    TreeNode* sortedListToBST(ListNode* head) {
        if(head==NULL)
            return NULL;
         else if(head->next==NULL)
         {
           TreeNode* root=new TreeNode(head->val);
             return root;
         }
             else
        {
            int size1=lengthoflinkedlist(head)/2;
            ListNode* prev=head;
             ListNode* temp=head;
            while(size1--)
            {
                prev=temp;
                temp=temp->next;
            }
            prev->next=NULL;
            TreeNode* root=new TreeNode(temp->val);
            root->left=sortedListToBST(head);
            root->right=sortedListToBST(temp->next);
                    return root;

        }
        // return root;
    }
};