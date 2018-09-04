#include <bits/stdc++.h>

#if DEBUG && !ONLINE_JUDGE
    #include "debug.h"
#else
    #define debug(...)
#endif

using namespace std;

/*******  All Required define Pre-Processors and typedef Constants *******/
#define scd(t) scanf("%d",&t)
#define scld(t) scanf("%ld",&t)
#define sclld(t) scanf("%lld",&t)
#define scc(t) scanf("%c",&t)
#define scs(t) scanf("%s",t)
#define scf(t) scanf("%f",&t)
#define sclf(t) scanf("%lf",&t)
#define mem(a, b) memset(a, (b), sizeof(a))
#define repd(i,k) for(ll i=k;i>=0;i--)
#define rep(i,k) for(ll i=0;i<k;i++)
#define repn(i,k1,k2) for(ll i=k1;i<=k2;i++)

#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define foreach(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define in(A, B, C) assert( B <= A && A <= C)
#define mp make_pair
#define pb push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define ee6 (ll)1000001
#define ee5 (ll)100001
#define read(type) readInt<type>()
#define tt ll t;cin>>t; while(t--)
typedef long long int ll;

typedef pair<ll, ll> pr;
typedef vector<ll> vi;
typedef vector<string> vs;
typedef vector<pr> vpr;
typedef vector<vpr>vvpr;
typedef vector<vi> vvi;
typedef map<ll,ll> MPII;
typedef set<ll> SETI;
typedef multiset<ll> MSETI;

vvi a;ll ok[ee5];vvi dp;
int main()
{
	#if !ONLINE_JUDGE
	freopen("C:/Users/hp/Desktop/CPP/PRACTICE/data.txt","r",stdin);
	#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	ll n,m;cin>>n>>m;
	
	rep(i,n)
	{vi temp;a.pb(temp);dp.pb(temp);}
	rep(i,n)
	rep(j,m){ll x;cin>>x;a[i].pb(x);}
	
	rep(col,m)
	{
		rep(row,n)
		{
			if(!row){dp[row].pb(row);continue;}
			if(a[row][col]>=a[row-1][col])
			dp[row].pb(dp[row-1][col]);
			else
			dp[row].pb(row);
		}
	}
	
	rep(row,n)
	{
		ok[row]=INF;
		rep(col,m)
		ok[row]=min(ok[row],dp[row][col]);
	}
	
	
	ll k;cin>>k;
	rep(i,k)
	{
		ll l,r;cin>>l>>r;l--;r--;
		if(ok[r]<=l)cout<<"Yes\n";else cout<<"No\n";		
	}
	
}
