#include<bits/stdc++.h>
using namespace std;

/*

Given a string containing duplicates, print all its distinct permutations such that there are no duplicate permutations and all permutations are printed in a lexicographic order.

Input Format->
The first and only line of the test case contains the input string.

Constraints->
Length of the string <= 8

Output Format->
Print all the distinct permutations in a lexicographic order such that each permutation is in a new line. Note that there should not be any duplicate permutations.

Sample Input->
ABA
Sample Output->
AAB
ABA
BAA
Explanation->
The possible permutations for the given string are { "AAB" , "AAB" , "ABA" , "BAA" } . We skip the repeating "AAB" permutation and only print it in once. Also we print the final output in lexicographical order.


*/

void permute(string str,int i,int &c,string ans[])
{
    if(i==str.size())
    {
        ans[c++] = str;
        return ;
    }

    for(int j=i;j<str.length();j++)
    {
        swap(str[i],str[j]);
        permute(str,i+1,c,ans);
        swap(str[i],str[j]);
    }
}


int main() 
{
    string str;
    cin>>str;
    
    string ans[100000];
	int c=0;

    permute(str,0,c,ans);
    sort(ans,ans+c);

    string temp="";
    for(int i=0;i<c;i++)
    {
        if(temp!=ans[i])
            cout<<ans[i]<<endl;
        temp=ans[i];
    }
    return 0;
}

