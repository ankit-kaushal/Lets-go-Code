#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1000];
int num_v = 0;
void insertion_in_adj_list()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }
}

void dfs_rec(int num_of_v,int start,vector<bool> &visited)
{
    visited[start]=true;
    cout<<start<<" ";
    for(auto x: adj[start])
        if(visited[x]==false)
            dfs_rec(num_of_v,x,visited);
}


void dfs_ver1(int num_of_v, int start)
{
    vector<bool> visited(num_of_v, false);
    dfs_rec(num_of_v,start,visited);
    //above is enough to get all the possible visitable vertices from start
    
    for(int i=0;i<num_of_v;i++)
        if(visited[i]==false)
            dfs_rec(num_of_v,i,visited);

}



int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    insertion_in_adj_list();
    int num_of_v = 5;
    int start = 0;
    dfs_ver1(num_of_v, start);
}