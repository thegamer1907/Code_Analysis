#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll m,k;
	int ans=0;
	ll n,p,now;
	cin>>n>>m>>k;
	ll a[m];
	for(long long i=1; i<=m; i++) cin>>a[i];
	p = (a[1]/k)*k;
	if(p>=a[1]) p-=k;
	p+=k;
	now=1;
	while(now<=m)
	{
		int t=0;
		while(now<=m&&a[now]<=p)
		{
			t++;
			now++;
		}
		if(t==0)
		{
			ll num = (a[now]-p-1+k)/k;
			p+=k*num;
			continue;
		}
		ans++;
		p+=t;
	}
	cout<<ans;
	return 0;
}