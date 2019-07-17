#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
queue<ll>q;
int main()
{
	ll n;
	ll m,k;
	cin>>n>>m>>k;
	for(ll i=0;i<m;i++)
	{
		ll a;
		scanf("%I64d",&a);
		q.push(a);
	}
	ll ans=0,x=(q.front()-1)/k+1,sc=0;
	while(m>0)
	{
		ll nmd=0;
		ll len=q.size();
		for(ll i=0;i<len;i++)
		{
			ll now=q.front();
			ll sb=(now-1)/k+1;
			if(sb==x)
			{
				q.pop();
				//cout<<now<<" ";
				sc++;
			}
			else
			{
				if(nmd==0)
				{
					x=(now-sc-1)/k+1;
					nmd=1;
				}
				q.pop();
				q.push(now-sc);
			}
		}
		//cout<<sc<<endl;
		ans++;
		m-=sc;
		sc=0;
	}
	cout<<ans<<endl;
	return 0;
}