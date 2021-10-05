/*
Given a list of non negative integers, arrange them such that they form the largest number.
For example:
Given [3, 30, 34, 5, 9], the largest formed number is 9534330.
*/


/*
Solution Approach
Sorting all numbers in descending order is the simplest solution that occurs to us. But this doesn’t work.
For example, 548 is greater than 60, but in the output, 60 comes before 548. As a second example, 98 is greater than 9, but 9 comes before 98 in the output.
The solution is to use any comparison based sorting algorithm. Thus, instead of using the default comparison, write a comparison function myCompare() and use it to sort numbers.
Given two numbers X and Y, how should myCompare() decide which number to put first – we compare two numbers XY (Y appended at the end of X) and YX (X appended at the end of Y).
If XY is larger, then, in the output, X should come before Y, else Y should come before X.
For example, let X and Y be 542 and 60. To compare X and Y, we compare 54260 and 60542. Since 60542 is greater than 54260, we put Y first.
*/
#include<bits/stdc++. h>

bool comp(string a,string b)
{
    string ab=a.append(b);
    string ba=b.append(a);
    return ab.compare(ba)>0?true:false;
}
string Solution::largestNumber(const vector<int> &A) {
    vector<string> Ans;
    string s="";
    int i,c=0;
    for(i=0;i<A.size();i++)
    {
        Ans.push_back(to_string(A[i]));
        if(A[i]==0)
            c++;
    }
    if(A.size()==c)
        return "0";
    sort(Ans.begin(),Ans.end(),comp);
    for(i=0;i<Ans.size();i++)
        s+=Ans[i];
    return s;
}