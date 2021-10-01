#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int main() {
	int n;
	cin>>n;
	int res = 0, count = 0;
	vector<int>v(n);
	for(int i = 0; i < n; i++) {
		cin>>v[i];
	}
	vector<int>v1;
	for(int i = 1; i < n-1; ) {
		if(v[i] - v[i-1] == v[i+1]- v[i]) {
			v1.push_back(v[i-1]);
			v1.push_back(v[i]);
			v1.push_back(v[i+1]);
			i += 3;	
		}
		if(i > n || v[i] - v[i-1] != v[i+1]- v[i]) {
			i++;
			for(int j = 3; j <= v1.size(); j++) {
				count++;
			}
			res += count*(count+1)/2;
			count = 0;
			v1.clear();
		}
			
	}
	cout<<res<<endl;
	return 0;	
}
