#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll nb,ns,nc,pb,ps,pc;
ll r;
int c[500];
string s;
bool f(ll x)
{
	ll req=max((x*c['B']-nb)*pb,0LL)+max((x*c['S']-ns)*ps,0LL)+max((x*c['C']-nc)*pc,0LL);
	if(req<=r)return 1;
	return 0;
}
int main()
{
	cin>>s;
	for(int i=0;i<s.size();i++)c[s[i]]++;
	cin>>nb>>ns>>nc>>pb>>ps>>pc>>r;
	ll l=0,h=(ll)1e14,ans;
	while(l<=h)
	{
		ll mid=(l+h)/2;
		if(f(mid))
		{
			ans=mid;
			l=mid+1;
		}
		else h=mid-1;
	}
	cout<<ans<<"\n";
	return 0;
}
