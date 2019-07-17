#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n,m,page;
	queue<ll> q;
	scanf("%lld%lld%lld",&n,&m,&page);
	for(ll i=1; i<=m; i++)
	{
		ll t;
		scanf("%lld",&t);
		q.push(t);
	}
	ll ans=0;
	ll shan=1;
	ll ye=0;
	int flag=1; // 1��ҳ
	while(!q.empty())
	{
		if(flag)
			ye++;
		flag=1;
		ll right=ye*page+shan-1;
//		printf("%d %d\n",left,right);
		while(1)
		{
			ll t = q.front();
			if(t<=right)
			{
				q.pop();
				shan++;
				flag=0;
			}
			else
				break;
			if(q.empty())
				break;
		}
		if(flag==0)
			ans++;
	}
	printf("%lld",ans);
}