/*
Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

Follow up: Could you solve it without converting the integer to a string?
*/

#include<bits/stdc++.h>
using namespace std;


bool isPalindrome(int x) {
        if(x<0){
        	return false;
		}
		if(x!=0 and x%10==0){
			return false;
		}
		int reverse=0;
        while(x>reverse){
            reverse=(reverse*10)+(x%10);
            x=x/10;
        }
        if(x==reverse){
            return true;
        }
        if(x==reverse/10){
        	return true;
		}
        else{
        	return false;
		}
}

int main() {
	int x;
	cin>>x;
	cout<<isPalindrome(x);
}


