#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;

#define lp(var,start,end) for (ll var = start; var <end ; ++var)
#define rlp(var,start,end) for(ll var = start; var>=end ; var--)
#define pb push_back
#define mp make_pair
#define pf push_front
#define F first
#define S second
#define vll vector<ll>
#define pll pair<ll,ll> 
#define endl "\n"
const ll N=1e5+5;

int main()
{
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
	ll n,m;
	cin >> n>>m;
	ll ary[n];
	ll mx=-1;
	lp(i,0,n)
	{
		cin >> ary[i];
		mx=max(ary[i],mx);
	}
	mx+=m;
	ll mx2=-1;
	while(m--)
	{
		ll mn=1000000000000000;
		ll id=-1;
		lp(i,0,n)
		{
			if(ary[i]<=mn)
			{
				mn=ary[i];
				id=i;
			}
		}
		ary[id]++;
	}
	lp(i,0,n)
	{
		mx2=max(mx2,ary[i]);
	}
	cout<<mx2<<" "<<mx<<endl;
	return 0;
}