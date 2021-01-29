/*
Given a string s, the power of the string is the maximum length of a non-empty substring that contains only one unique character.

Example 1:
Input: s = "leetcode"
Output: 2
Explanation: The substring "ee" is of length 2 with the character 'e' only.

Example 2:
Input: s = "triplepillooooow"
Output: 5

*/


#include<bits/stdc++.h>

using namespace std;

int main(){
	string str;
	cin>>str;
	int count=0;
	for(int i=0;i<str.length();i++){
		int count1=1;
		for(int j=i+1;j<str.length();j++){
			if(str[i]!=str[j]){
				break;
			}
				count1++;
		}
		if(count1>count){
			count=count1;
		}
	}
	cout<<count;
}
