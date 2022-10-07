#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main()
{
    //  inbuilt max heap is converted to inbuilt mi heap
    priority_queue<int ,vector<int>,greater<int>>p;       
    p.push(120);
    p.push(16);
    p.push(19);
    p.push(160);
    p.push(100);
    cout<<"size: "<<p.size()<<endl;
    cout<<"top lelement "<<p.top()<<endl;
    while(!p.empty())
    {
        cout<<p.top()<<endl;
        p.pop();
    }
}