/*
It does not matter how slowly you go as long as you do not stop.
*/
 
#include <bits/stdc++.h>
 
#define ld long double
#define ll long long int
 
#define rep(i,n,x) for(ll i=x;i<n;i++)
#define rev_rep(i,n,x) for(ll i=x;i>=n;i--)
 
#define fi first
#define in insert
#define se second
#define inf ll_MAX
#define pb push_back
#define pi pair<ll,ll>
#define mp(x,y) make_pair(x,y)
#define all(a) a.begin(),a.end()
#define debug(x) cout<<"x is : "<<x<<endl
 
#define JUGAAD ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

using namespace std;

int main()
{
	JUGAAD;
	ll n, m, k;
	cin>>n>>m>>k;
	ll a[m];
	ll cnt = 0;
	ll end = k;
	ll ans = 0;
	rep(i,m,0)
	{
		cin>>a[i];
	}
	rep(i,m,0)
	{
		if(a[i] < end)
			cnt++;
		else if(a[i] == end)
		{
			cnt++;
			end += cnt;
			if(end > n)
				end = n;
			ans++; 
			cnt = 0;
		}
		else 
		{
			i--;
			if(cnt != 0)
			{
				ans++;
				end += cnt;
				if(end > n)
					end = n;
				cnt = 0;
			}
			else
			{
				end += k;
				if(end > n)
					end = n;
				cnt = 0;
			}
		}
	}
	if(cnt)
		ans++;
	cout<<ans<<endl;
	return 0;
}