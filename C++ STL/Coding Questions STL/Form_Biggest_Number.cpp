#include<bits/stdc++.h>
using namespace std;

bool compare(string a, string b){
	string ab=a.append(b);
	string ba=b.append(a);
	return ab>ba;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<string> v;
		
		for(int i=0;i<n;i++){
			string val;
			cin>>val;
			v.push_back(val);
		}
		
		sort(v.begin(),v.end(),compare);
		
		for(int i=0;i<n;i++){
			cout<<v[i];
		}
		cout<<endl;
	}
	return 0;
}
