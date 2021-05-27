#include<iostream>
#include<cstring>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

/*

Nishant is a very naughty boy in Launchpad Batch. 
One day he was playing with strings, and randomly shuffled them all. 
Your task is to help Nishant Sort all the strings ( lexicographically ) 
but if a string is present completely as a prefix in another string, then string with longer length should come first. 
Eg bat, batman are 2 strings and the string bat is present as a prefix in Batman - then sorted order should have - Batman, bat.


*/

bool compare(string a, string b){
	if(a==b.substr(0,a.length()) || b==a.substr(0,b.length()))
		return a.length()>b.length();
	return a<b;
}

int main()
{
	int n;
	cin>>n;
	vector<string> v;
	for(int i=0;i<n;i++){
		string name;
		cin>>name;
		v.push_back(name);
	}
	
	sort(v.begin(),v.end(),compare);
	
	
	for(int i=0;i<n;i++){
		cout<<v[i]<<endl;
	}
	
    return 0;
}

