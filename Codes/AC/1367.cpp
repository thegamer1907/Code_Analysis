#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
using namespace std;
ll n,s,i,a[101010],L,R,C,h1,h2;
ll hai(ll aa)
{
	ll ii,H=0;
	vector<ll> v;
	for(ii=1;ii<=n;ii++)
		v.pb(a[ii]+ii*aa);
	sort(v.begin(),v.end());
	for(ii=0;ii<aa;ii++)
		H+=v[ii];
	return H;
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>s;
	for(i=1;i<=n;i++)
		cin>>a[i];
	L=0;
	R=n;
	while(L<=R)
	{
		C=(L+R)/2;
		if(hai(C)<=s)
		{
			h1=C;
			h2=hai(C);
			L=C+1;	
		}	
		else
			R=C-1;
	}
	cout<<h1<<" "<<h2<<"\n";
}
