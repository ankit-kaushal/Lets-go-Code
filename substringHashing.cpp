#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define mod 1000000007
ll dp[1000001]; // dp[i] stores the hash value of substring starting from 0 to index i;
ll inverse[1000001]; // ith index store inverse of the value p^i;
ll findPower(ll a,ll n)
{
	ll res=1;
	while(n>0)
	{
		if(n&1) res=(res*a)%mod;
		a=(a*a)%mod;
		n>>=1;
	}
	return res;
}
void init(string s)
{
	ll p=31;
	ll power=1;
	ll value=0;
	dp[0]=(s[0]-'a'+1);
	value+=(s[0]-'a'+1);
	inverse[0]=1;
	for(int i=1;i<s.size();i++)
	{
		power=(power*p)%mod;
		value=(value+(s[i]-'a'+1)*power)%mod;
		dp[i]=value;
		inverse[i]=findPower(power,mod-2);
	}
}
ll substringHash(ll l,ll r)
{
	ll res=dp[r];
	if(l>0) res-=dp[l-1];
	res=(res*inverse[l])%mod;
	return res;
}
void solve()
{
	ll l,r;
	cin>>l>>r;
	cout<<substringHash(l,r)<<endl;
}
int main()
{
	string s;
	cin>>s;
	init(s);
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}
