#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define cint(d) scanf("%d", &d)
#define cint2(a, b) scanf("%d %d", &a, &b)
#define cint3(a, b, c) scanf("%d %d %d", &a, &b, &c)
#define cint4(a, b, c, d) scanf("%d %d %d %d", &a, &b, &c, &d)

#define clong(d) scanf("%lld", &d)
#define clong2(a, b) scanf("%lld %lld", &a, &b)
#define clong3(a, b, c) scanf("%lld %lld %lld", &a, &b, &c)
#define clong4(a, b, c, d) scanf("%lld %lld %lld %lld", &a, &b, &c, &d)

#define foreach(v, c) for(__typeof( (c).begin()) v = (c).begin();  v != (c).end(); ++v)
#define revforeach(v, c) for(__typeof( (c).rbegin()) v = (c).rbegin();  v != (c).rend(); ++v)
#define ALL(v) (v).begin(), (v).end()

#define pb push_back
#define eb emplace_back
#define mp make_pair
#define fi first
#define se second

typedef long long int slong;
typedef pair<int, int> pii;
typedef pair<slong, slong> pll;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
typedef set<int>::iterator sit;
typedef map<int,int>::iterator mit;
typedef vector<int>::iterator vit;

#ifdef VSP4 
    #include "debug.h"    
#else
    #define debug(args...)                  // Just strip off all debug tokens
#endif

const int MOD = 1000000007;
#define MODSET(d) if ((d) >= MOD) d %= MOD;
#define MODNEGSET(d) if ((d) < 0) d = ((d % MOD) + MOD) % MOD;
#define MODADDSET(d) if ((d) >= MOD) d -= MOD;
#define MODADDWHILESET(d) while ((d) >= MOD) d -= MOD;

const int MAXN = 2e5;
const int SQRTN = 300;
const int LOGN = 16;
const int INT_INFINITY = 1001001001;
const slong LONG_INFINITY = 2001001001001001001ll;
const double EPS = 1e-6;

const slong VERYHIGH = 2001001001001ll;
const int LIMIT = 1e6;

int n, k;

int main()
{
	#ifdef VSP4
		//freopen("input.txt", "r", stdin);
		//freopen("output.txt", "w", stdout);
	#endif
	
	int i, j, d;
	
	cint2(n, k);

	set<vector<int> > uniqdata;

	for (i = 1; i <= n; i++)
	{
		vector<int> data;
		for (j = 1; j <= k; j++)
		{
			cint(d);
			data.pb(d);
		}

		uniqdata.insert(data);
	}

	vector< vector<int> > data(ALL(uniqdata));

	int teamcnt[10];

	for (i = 1; i < (1 << data.size()); i++)
	{
		int probs = __builtin_popcount(i);

		for (j = 1; j <= k; j++)
		{
			teamcnt[j] = 0;
		}

		for (j = 0; j < data.size(); j++)
		{
			if (i & (1 << j))
			{
				for (int l = 1; l <= k; l++)
				{
					if (data[j][l-1])
					{
						teamcnt[l]++;
					}
				}
			}
		}

		bool valid = true;

		for (j = 1; j <= k; j++)
		{
			if (2*teamcnt[j] > probs)
			{
				valid = false;
			}
		}

		if (valid)
		{
			cout << "YES";
			return 0;
		}
	}

	cout << "NO";

	return 0;
}
