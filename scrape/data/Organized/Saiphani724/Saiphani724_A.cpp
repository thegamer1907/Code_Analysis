//created by P.Sai Phani	
//Copyright © 2018 P.Sai Phani, All rights reserved.
#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define inf 1e9
typedef long long ll;
typedef long double ld;

typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<ll> vl;
typedef vector<bool> vb;
typedef vector<float> vf;
typedef vector <ld> vd;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<ld,ld> pdd;
typedef vector<pii> vii;
typedef vector<pll> vll;

#define vec(x) vector<x >
#define z size()
#define bg begin()
#define en end()
#define get(x) cin>>x
#define put(x) cout<<x
#define pls(x) cout<<x<<' '
#define pln(x) cout<<x<<"\n"
#define f(abc,a,b) for(ll abc=a;abc<b;abc++)
#define fr(abc,vtr) for(auto abc=vtr.bg;it!=vtr.en;abc++)
#define F(i,a,b) for(ll i=b-1;i>=a;i--)
#define vput(a) f(abc,0,a.z) pls(a[abc]); nl;
#define vget(v) f(i,0,v.z) get(v[i]);
#define vsort(v) sort(v.begin(),v.end())
#define all(v) v.begin(),v.end()
#define vuni(v) v.erase(unique(all(v)),v.end())
#define ub(a,x) upper_bound(all(a),x) - a.bg
#define lb(a,x) lower_bound(all(a),x) - a.bg
#define pb push_back
#define X first
#define Y second

#define vmin(v) *min_element(all(v))
#define vmax(v) *max_element(all(v))
#define total(v) accumulate(all(v),ll(0))

#define bs(v,x) binary_search(all(v),x)
#define parray(a,n) f(i,0,n) pls(a[i]); nl;
#define ppair(x) cout<<x.first<<' '<<x.second<<"\n";
#define vp(x,y) vector<pair<x,y> >
// #define p(x,y) pair<x,y >
#define endl '\n'
#define nl cout<<'\n';
#define w(a) while(a--)
#define wh(a) while(a)

ll maxi=LLONG_MAX;
ll mini=LLONG_MIN;

ll imax = INT_MAX;
ll imin = INT_MIN;

void fast() { ios_base::sync_with_stdio(false); cin.tie(NULL); }

#define con continue
#define bk break
#define ret return
#define setpr fixed<<setprecision
#define gl(a) getline(cin,a)
#define ppb pop_back
#define pq priority_queue




int main()
{

	#ifndef ONLINE_JUDGE
	freopen("D:/Edu/Competetive_Programming/input.txt", "r", stdin);
	freopen("D:/Edu/Competetive_Programming/output.txt", "w", stdout);
	#endif
	
	fast();
	
	ll n,m,k;
	cin>>n>>m>>k;
	vl p(m);
	vget(p);

	ll cnt = 0;
	ll tot = 0;
	ll prev = 0;
	while(prev < p.z)
	{
		ll mn = ((p[prev]-1 - tot)/k) * k + 1;
		ll mx = mn + k - 1 + tot;
		ll pos = upper_bound(p.begin(),p.end(),mx) - p.begin();
		tot=pos;
		
		prev = pos;

		cnt++;
		// pln(cnt);
		// pln(prev);
	}
	pln(cnt);
	











	return 0;
}