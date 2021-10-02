#include<bits/stdc++.h>
using namespace std;

// Here we define our own sorting criteria so that it sorts out length wise
bool compare(string a,string b){
	//if both have equal length that sort lexicographically
	if(a.length()==b.length()){
		return a<b;
	}
	return a.length()>b.length();
}

int main(){
	int n;
	cin>>n;
	cin.get(); // To consume any extra enter that is after \n
	
	string s[100]; // Here vector of Strings can also be used in place of array of Strings
	
	for(int i=0;i<n;i++){
		getline(cin,s[i]);
	}
	
	sort(s,s+n,compare);
	
	for(int i=0;i<n;i++){
		cout<<s[i]<<endl;
	}
	
	return 0;
}

