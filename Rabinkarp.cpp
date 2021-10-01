#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define mod 1000000007
ll dp[100001];
void init(string s)
{
	ll value=0;
	ll p=31;
	ll power=1;
	dp[0]=(s[0]-'a'+1);
	for(int i=1;i<s.size();i++)
	{
		power=(power*p)%mod;
		dp[i]=(dp[i-1]+(s[i]-'a'+1)*power)%mod;
	}
}
ll findHash(string s)
{
	ll value=0;
	ll p=31;
	ll power=1;
	for(char c:s)
	{
		value=(value+(c-'a'+1)*power)%mod;
		power=(power*p)%mod;
	}
	return value;
}
ll substringHash(ll l,ll r)
{
	ll result=dp[r];
	if(l>0) result=(result-dp[l-1]+mod)%mod; // Important line if result get negative we have to add mod
	return result%mod;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string input;
	getline(cin,input);
	init(input);
	string patt;
	getline(cin,patt);
	int ps=int(patt.size());
	int is=int(input.size());
	if(ps>is)
	{
		cout<<"Invalid input"<<endl;
	}
	ll phash=findHash(patt);
	int i=0;
	int j=patt.size()-1;
	ll power=1;
	ll p=31;
	int flag=0;
	while(j<input.size())
	{
		ll currHash=substringHash(i,j);
		ll x=(phash*power)%mod;
		if(currHash==x) cout<<i<<endl,flag=1;
		power=(power*p)%mod;
		i++;
		j++;
	}
	if(flag==0) cout<<"No match found"<<endl;
}

