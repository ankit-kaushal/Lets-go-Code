#include <iostream>
#include<unordered_map>
using namespace std;

/*
In the problem we are given list of strings. We have a word say "No", "Not", "News", "Hello", "Apple"
Lets consider we have been given a paragraph which contains lots of words.
After that we get certain queries: So, queries will be-> Tell if the word 'no' present in the paragraph or not.
if present print 'present' else 'absent'

So, we can sove this, using three approaches:
1. Brute force
2. Hashing
3.We can buid a prefix tree and this prefix tree is called trie
*/

class Node{
    public:
        char data;
        unordered_map<char,Node*> children;
        bool terminal;

        Node(char d){
            data = d;
            terminal = false;
        }
};

class Trie{
    Node* root;
    int cnt;

    public:

    Trie(){
        root = new Node('\0');
        cnt = 0;
    }

    void insert(char *w){

        Node* temp = root;
        for(int i=0;w[i]!='\0';i++){

            char ch = w[i];
            if(temp->children.count(ch)){
                temp = temp->children[ch];
            }
            else{
                Node* n = new Node(ch);
                temp->children[ch] = n;
                temp = n;
            }
        }
        temp->terminal = true;
    }

    bool find(char *w){
        Node* temp = root;
        for(int i=0;w[i]!='\0';i++){
            char ch = w[i];
            if(temp->children.count(ch)==0){
                return false;
            }
            else{
                temp = temp->children[ch];
            }
        }
        return temp->terminal;
    }
};

int main(){

    Trie t;
    char words[][10] = {"a","hello","not","news","apple"};
    char w[10];
    cin>>w;

    for(int i=0;i<5;i++){
        t.insert(words[i]);
    }

    if(t.find(w)){
        cout<<"Present";
    }
    else{
        cout<<"Absent";
    }

    return 0;
}

