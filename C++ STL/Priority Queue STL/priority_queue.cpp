#include <iostream>
#include <queue>
using namespace std;

int main() {

    priority_queue<int> q; //This type of priority queue id based on MAX HEAP, where we get maximum element first
    //We can convert it to MIN HEAP by passing inbuilt comparator i.e, greater<int>
    // priority_queue<int, vector<int>, greater<int>> q;

    for(int i=1;i<=5;i++){
        q.push(i);
    }

    while(!q.empty()){
        cout<< q.top() <<" <-";
        q.pop();
    }

    return 0;
}
