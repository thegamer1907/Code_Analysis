#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) 	for(int i=a;i<b;++i)
#define RFOR(i,a,b) 	for(int i=a;i>=b;--i)
#define ln 		"\n"
#define mp make_pair
#define pb push_back
#define sz(a)	ll(a.size())
#define debug1(x) cout<<x<<endl
#define debug2(x,y) cout<<x<<"-->"<<y<<endl
#define debug3(x,y,z) cout<<x<<"-->"<<y<<"-->"<<z<<endl
#define F first
#define S second
#define all(c)	c.begin(),c.end()
#define trace(c,x) for(auto &x:c)
#define pii pair<ll,ll>
typedef long long ll;
typedef long double ld;
typedef	priority_queue<pii,std::vector<pii>,greater<pii> > revpr;
const int L=1e5+7;
int a[L];
int main()
{
		ios_base::sync_with_stdio(false);
	 	cin.tie(NULL);
	 	int n, q, m;
	 	cin >> n;
	 	FOR(i,0,n)cin >> a[i];
	 	FOR(i,1,n)a[i] += a[i-1];
	 	cin >> m;
	 	while(m--)
	 	{
	 		cin >> q;
	 		cout<<lower_bound(a, a+n, q) - a + 1<<ln;
	 	}
		return 0;
}