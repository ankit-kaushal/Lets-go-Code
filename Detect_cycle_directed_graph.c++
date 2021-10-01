#include<bits/stdc++.h>
using namespace std;

void addedge(vector<vector<int>> &adj,int u,int v)
{
    adj[u].push_back(v);
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
bool dfs_rec(vector<vector<int>>&adj,int u,vector<bool>&visited,vector<bool>&instack)
{

    //process the vertex
    visited[u]=true;
    instack[u]=true;
    for(auto x:adj[u])
    {
        if(visited[x]==false && dfs_rec(adj,x,visited,instack))
        return true;
        else if(instack[x])return true;
    }
    instack[u]=false;
    return false;
}


bool dfs(vector<vector<int>>&adj,int size)
{
    vector<bool>visited(size,false);
    vector<bool>instack(size,false);
    for(int i=0;i<size;i++)
    {
        if(visited[i]==false)
            if(dfs_rec(adj,i,visited,instack))
                return true;
    }
    return false;
}

int main()
{
    int size=6;
    vector<vector<int>>adj(size);
    addedge(adj,0,1);
    addedge(adj,2,1);
    addedge(adj,2,3);
    addedge(adj,3,4);
    addedge(adj,4,5);
    addedge(adj,5,3);
    printgraph(adj);
    if(dfs(adj,size))cout<<"cycle found"<<endl;
    else
    cout<<"cycle not found"<<endl;
    return 0;
}