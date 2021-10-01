#include<bits/stdc++.h>
using namespace std;

void fill_lps(string str, vector<int>&lps)
{
    int len=0;
    int n=str.size();
    lps[0]=0;
    int i=1;
    while(i<n)
    {
        if(str[i]==str[len])
        {
            len++;
            lps[i]=len;
            i++;
        }
        else
        {
            if(len==0)
            {
                lps[i]=0;
                i++;
            }
            else//l>0
            {
                len=lps[len-1];
            }
        }
    }
}

void kmp(string pat,string txt)
{
    int n=txt.length();
    int m=pat.length();
    vector<int>lps(m);
    fill_lps(pat,lps);
    int i=0,j=0;
    while(i<n)
    {
        if(pat[j]==txt[i])
        {
            i++;
            j++;
        }
        if(j==m)
        {
            cout<<i-j;
            j=lps[j-1];
        }
        else if(i<n && pat[j]!=txt[i])
        {
            if(j==0)
            i++;
            else
            j=lps[j-1];
        }
    }
}


int main()
{
string pat;
getline(cin,pat);
cout<<pat<<endl;
string txt;
getline(cin,txt);
cout<<txt<<endl;
kmp(pat,txt);
cout<<endl;
return 0;
}