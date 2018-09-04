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
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define rep(i,k) for(ll i=0;i<k;i++)
#define repn(i,k1,k2) for(ll i=k1;i<k2;i++)
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
#define read(type) readInt<type>()
#define tt ll t;cin>>t; while(t--)
typedef long long int ll;

typedef pair<ll, ll> pr;
typedef vector<ll> vi;
typedef vector<string> vs;
typedef vector<pr> vpr;
typedef vector<vi> vvi;
typedef map<ll,ll> MPII;
typedef set<ll> SETI;
typedef multiset<ll> MSETI;


int main()
{
//	ios_base::sync_with_stdio(false); 
//	cin.tie(NULL);
	
		
	ll n,k;cin>>n>>k;ll cnt=0;
	while(k>0)
	{
		if(k%2==0)
		{k=k/2;cnt++;}
		else break;
	
	}
	cout<<cnt+1<<"\n";
}
