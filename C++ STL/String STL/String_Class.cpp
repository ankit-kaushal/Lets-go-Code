#include<bits/stdc++.h>
using namespace std;

int main(){
	// String Init
	string s0;
	string s1("Hello");
	string s2="Hello World";
	
	string s3(s2);
	string s4=s3;
	
	char a[]={'a','b','c','\0'};
	string s5(a);
	
	cout<<s0<<endl;
	cout<<s1<<endl;
	cout<<s2<<endl;
	cout<<s3<<endl;
	cout<<s4<<endl;
	cout<<s5<<endl;
	
	if(s0.empty()){
		cout<<"s0 is an empty string"<<endl;
	}
	
	//Append
	s0.append("I love C++");
	cout<<s0<<endl;
	s0+=" and python";
	cout<<s0<<endl;
	
	//Remove or erase the content
	cout<<s0.length()<<endl;
	s0.clear();
	cout<<s0.length()<<endl;
	
	//Compare two Strings
	s0="Apple";
	s1="Mango";
	
	cout<<s0.compare(s1)<<endl; //Returns an integer ==0 (if equal) or else >0 or <0
	cout<<s1.compare(s0)<<endl;
	cout<<s1.compare(s1)<<endl;
	
	//Overloaded Operators
	if(s1>s0){
		cout<<"Mango is lexicographically greater than apple"<<endl;
	}
	
	cout<<s1[0]<<endl;
	
	//Find substrings
	string s = "I want to have apple juice";
	int idx = s.find("apple");
	cout<<idx<<endl;
	
	//Remove a word from the string
	string word = "apple";
	int len=word.length();
	cout<<s<<endl;
	s.erase(idx,len+1);
	cout<<s<<endl;
	
	//Iterate over all the characters in the string
	
	for(int i=0;i<s1.length();i++){
		cout<<s1[i]<<":";
	}
	cout<<endl;
	//Iterators
	for(auto it=s1.begin();it!=s1.end();it++){
		cout<<(*it)<<",";
	}
	cout<<endl;
	//For each loop
	for(auto c:s1){
		cout<<c<<".";
	}
	
	
	// Instead of auto we can also write string::iterator
	cout<<endl;
	cout<<endl;
	
	for(string::iterator it=s1.begin();it!=s1.end();it++){
		cout<<(*it)<<",";
	}
	
	cout<<endl;
	
	for(char c:s1){
		cout<<c<<".";
	}
	
	return 0;
}

