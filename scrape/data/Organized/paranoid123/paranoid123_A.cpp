#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn=1e5+10;
ll q[maxn];
int main()
{
	ll n,m,page;
//	queue<ll> q;
	int cnt=0;
	scanf("%lld%lld%lld",&n,&m,&page);
	for(ll i=1; i<=m; i++)
	{
		ll t;
		scanf("%lld",&t);
		q[++cnt]=t;
	}
	ll ans=0;
	ll shan=0;
	ll ye=0;
	int flag=1; // 1��ҳ
	cnt=1;
	while(cnt<=m)
	{
		if(flag)
		{
			ye=(q[cnt]-shan)/page;
			if((q[cnt]-shan)%page!=0)
				ye++;
		}
		flag=1;
		ll right=ye*page+shan;
		while(1)
		{
			ll t = q[cnt];
			if(t<=right)
			{
				cnt++;
				shan++;
				flag=0;
			}
			else
				break;
			if(cnt>m)
				break;
		}
		if(flag==0)
			ans++;
	}
	printf("%lld",ans);
}