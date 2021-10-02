// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends

class Solution{
public:
    Node* divide(int N, Node *head)
    {
            Node * r=head;
            Node* p=head;
            Node* q=head;
            int k=0;
            if(head->data%2==1)
            {
               while(p->next!=NULL&&(p->next)->data%2==1)
               {
                   p=p->next;
               }
               if(p->next!=NULL)
               {
               q=p->next;
               p->next=q->next;
               q->next=head;
               head=q;
               }
               else
               {
                   return head;
               }
            }
            r=head;
            while(r->next!=NULL&&(r->next)->data%2==0)
            {
                r=r->next;
            }
            if(r->next!=NULL)
            {
            p=r->next;
            q=r;
            while(p!=NULL)
            {
                if(p->data%2==0)
                {
                    Node *z=p;
                    p=q;
                    q->next=z->next;
                    z->next=r->next;
                    r->next=z;
                    r=z;
                }
                q=p;
                p=p->next;
            }
            }
            return head;
    }
};

// { Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}
  // } Driver Code Ends