#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;

#define lp(var,start,end) for (ll var = start; var <end ; ++var)
#define rlp(var,start,end) for(ll var = start; var>=end ; var--)
#define pb push_back
#define mp make_pair
#define pf push_front
#define vll vector<ll>
#define pll pair<ll,ll> 

ll calc(ll n,ll k)
{
	ll cnt=0;
	while(n>0)
	{
		cnt+=min(k,n);
		n-=k;
		if(n>=10)
		{
			ll x=n/10;
			n-=x;
		}
	}
	return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
	ll n;
	cin >> n;
	ll lo=1;
	ll hi=n;
	ld k=n;
	k=ceil(k/(ld)2);
	while(hi>lo)
	{
		ll mid=(hi+lo)/2;
		ll x=calc(n,mid);
		// cout<<mid<<" "<<x<<endl;
		if(x>=k)
		{
			hi=mid;
		}
		else
		{
			lo=mid+1;
		}
	}	    
	cout<<lo<<endl;
	return 0;
}