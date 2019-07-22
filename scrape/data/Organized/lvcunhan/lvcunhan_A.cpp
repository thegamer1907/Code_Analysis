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
		ll len=q.size();
		ll sb;
		ll dsb=0;
		while(!q.empty())
		{
			ll now=q.front();
			sb=(now-1-dsb)/k+1;
			if(sb==x)
			{
				q.pop();
				//cout<<now<<" ";
				sc++;
			}
			else
			{
				x=(now-1-sc)/k+1;
				dsb=sc;
				ans++;
			}
		}
		//cout<<sc<<endl;
	cout<<ans+1<<endl;
	return 0;
}