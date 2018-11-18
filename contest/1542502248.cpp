#include<bits/stdc++.h>
using namespace std;
#define ll long long int

map<ll,ll> map1;
ll n,m,x;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);

    cin>>n>>m;
	for(ll i=1;i<=n;++i)
	{
		ll res=0;
		for(ll j=1;j<=m;++j)
		{
			cin>>x;
			if(x==1)
			res|=(1<<(j-1));
		}
		//cout<<"aaya "<<res<<endl;
		map1[res]++;
	}
	for(ll i=0;i<=15;++i)
	for(ll j=0;j<=15;++j)
	{
		if(map1[i] && map1[j])
		{
			if((i&j)==0)
			{
				cout<<"YES"<<endl;
				return 0;
			}
		}
	}
	cout<<"NO"<<endl;
	return 0;
}
