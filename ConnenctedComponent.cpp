#include<bits/stdc++.h>
using namespace std;
vector<int> v[100000+1];
vector<bool> visit(100000+1,false);
void dfs(int vertex)
{
	visit[vertex]=true;
	cout<<vertex<<" ";
	for(int i=0;i<v[vertex].size();i++)
	{
		int child=v[vertex][i];
		if(visit[child]==false)
		{
			dfs(child);
		}
	}
}
int main()
{
	int vertex,edge,count=0;
	cin>>vertex>>edge;
	while(edge--)
	{
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for(int i=1;i<=vertex;i++)
	{
		if(visit[i]==false)
		{
			count++;
			dfs(i);
			cout<<endl;
		}
	}
	cout<<count<<endl;
}
