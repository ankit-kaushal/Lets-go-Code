#include<bits/stdc++.h>
using namespace std;

void addedge(vector<vector<int>> &adj,int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printgraph(vector<vector<int>>&adj)
{
    int i=0;
    for(auto x: adj)
    {
        cout<<i<<" -> ";
        for( auto  l:x)
        {
            cout<< l<<" | ";
        }
        cout<<endl;
        ++i;
    }
}
int main()
{
    int v=4;
    vector<vector<int>>adj(v);
    addedge(adj,0,1);
    addedge(adj,0,2);
    addedge(adj,1,2);
    addedge(adj,1,3);
    printgraph(adj);
    return 0;
}