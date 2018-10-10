#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MAX 500005

bool check(ll k,int m,int n,ll mid)
{
	ll ans = 0;
	for(int i=1;i<=m;++i)
		ans += min((ll)n,mid/i);
	return ans>=k;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n,m;
	ll k;
	cin>>n>>m>>k;

	ll hi = 25*1e11+5;
	ll lo = 0;
	while(lo<hi)
	{
		ll mid = (hi+lo)/2;

		if( check(k,m,n,mid)==true )
			hi = mid;
		else
			lo = mid+1;
	}
	cout<<hi;

	return 0;
}