#include<bits/stdc++.h>
using namespace std;


int main(){
	int n,k;
	cin>>n>>k;
	vector<int> v;
		
	for(int i=0;i<k;i++){
		for(int j=0;j<n;j++){
			int val;
			cin>>val;
			v.push_back(val);
		}
	}
	
	sort(v.begin(),v.end());
		
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	return 0;
}
