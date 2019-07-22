#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+10;
int main()
{
	ll n,m,k;
	cin>>n>>m>>k;
	ll a[maxn];
	for(int i=0;i<m;i++)
	cin>>a[i];
	ll ans=0;
	ll now=0;
	ll last=0;
	ll cnt=0;
	while(now<m)
	{
		ll last=((a[now]-cnt-1)/k+1)*k+cnt;
		//cout<<"now="<<now<<"last="<<last<<"cnt="<<cnt<<endl;
		while(a[now]<=last&&now<m)
		{
			now++;
			cnt++;	
		}
		ans++;
		//cout<<"ans="<<ans<<endl;
	}
	cout<<ans<<endl;
	
	
	return 0;
}

/*
16 7 5
2 3 4 5 6 15 16
*/