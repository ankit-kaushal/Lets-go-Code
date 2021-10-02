#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node*left;
        node*right;

        node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};

node* buildTree(){
    int d;
    cin>>d;

    if(d==-1){
        return NULL;
    }
    node * root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}
void print(node *root){
    if(root==NULL){
        return;
    }
    //Otherwise, print root first followed by subtrees(children)
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}

void printIn(node *root){
    if(root==NULL){
        return;
    }
    //Otherwise, left root right
    printIn(root->left);
    cout<<root->data<<" ";
    printIn(root->right);
}

void printPost(node *root){
    if(root==NULL){
        return;
    }
    
    printPost(root->left);
    printPost(root->right);
    cout<<root->data<<" ";
}


int main(){ 
    node* root = buildTree();
    print(root);
    cout<<endl;
    
    printIn(root);
    cout<<endl;
    
    printPost(root);
    cout<<endl;


return 0;
}

/*

Input ->

8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1

output ->

8 10 1 6 9 7 3 14 13
1 10 9 6 7 8 3 13 14
1 9 7 6 10 13 14 3 8

*/











