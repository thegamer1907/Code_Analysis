#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
#define fastScan ios_base::sync_with_stdio(0); cin.tie(NULL);
#define ABS(x) ((x) < 0 ? -1*(x) : (x))
#define MAX(x,y) ((x) > (y) ? (x) : (y))
#define MIN(x,y) ((x) < (y) ? (x) : (y))
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define INF 2000000000
#define BINF 20000000000000000LL
#define trace(x)                 cerr << #x << ": " << x << endl;
#define trace1(x)                cerr << #x << ": " << x << endl;
#define trace2(x, y)             cerr << #x << ": " << x << " | " << #y << ": " << y << endl;
#define trace3(x, y, z)          cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define trace4(a, b, c, d)       cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;
#define trace5(a, b, c, d, e)    cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << endl;
#define trace6(a, b, c, d, e, f) cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << " | " << #f << ": " << f << endl;
typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> pl;
const ld PI = acos(-1.0);

int main()
{
	fastScan;
	ll h,m,s,t1,t2,i,tmp;
	cin >> h >> m >> s >> t1 >> t2;
	
	ll ms = m/5, me = ms;
	if(m % 5)
		++me;
	else if(s)
		++me;

	if(ms == 0)
		ms = 12;
	if(me == 0)
		me = 12;

	ll ss = s/5, se = ss;
	if(s % 5)
		++se;
	if(ss == 0)
		ss = 12;
	if(se == 0)
		se = 12;

	ll hs = h, he = hs;
	if(m || s)
		he++;
	if(he == 13)
		he = 1;

	trace6(ss,se,ms,me,hs,he)

	vector<ll> times = {h,m,s}; sort(times.begin(), times.end());

	tmp = t1;
	for(i = t1; ; )
	{
		t1++; if(t1 == 13) t1 = 1;

		if(t1 == he || t1 == se || t1 == me)
			break;

		if(t1 == t2)
		{
			cout << "YES";
			return 0;
		}

		if(t1 == hs || t1 == ss || t1 == ms)
			break;
	}

	t1 = tmp;
	for(i = t1; ; )
	{
		t1--; if(t1 == 0) t1 = 12;

		if(t1 == hs || t1 == ss || t1 == ms)
			break;

		if(t1 == t2)
		{
			cout << "YES";
			return 0;
		}
		
		if(t1 == he || t1 == se || t1 == me)
			break;
	}

	cout << "NO";
	
	return 0;
}