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

ll cnts[16];

int main()
{
	fastScan;
	ll N,K,i,j;
	cin >> N >> K;
	
	for(i = 0; i < N; ++i)
	{
		ll val = 0;
		for(j = 0; j < K; ++j)
		{
			ll x; cin >> x;
			val = val*2+x;
		}
		cnts[val]++;
	}

	if(cnts[0])
	{
		cout << "YES" << endl;
		return 0;
	}

	for(i = 0; i < (1<<K); ++i)
	{
		//trace2(i,cnts[i])
		for(j = 0; j < (1<<K); ++j)
		{
			if(i == j)
				continue;
			ll k;
			for(k = 0; k < K; ++k)
			{
				ll b1 = ((1 << k) & i), b2 = ((1 << k) & j);
				if(b1 && b2)
					break;
			}
			if(k == K)
			{
				if(cnts[j] && cnts[i])
				{
					cout << "YES";
					return 0;
				}
			}
		}
	}
	
	cout << "NO";

	return 0;
}