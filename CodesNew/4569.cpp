#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,s[10000010];
int main()
{
	cin>>n;
	for(ll i=0;i<n;i++)cin>>s[i];
	sort(s,s+n);
	ll t=0;
	for(ll i=0;i<n;i++)
	{
		if(s[i]>=2*s[t])t++;
	}
	cout<<n-min(n/2,t)<<endl;
	return 0;
}