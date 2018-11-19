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

const int MAXN = 200;
const int SQRTN = 300;
const int LOGN = 16;
const int INT_INFINITY = 1001001001;
const slong LONG_INFINITY = 2001001001001001001ll;
const double EPS = 1e-6;

const slong VERYHIGH = 2001001001001ll;
const int LIMIT = 1e6;

int n, m;

const int ANSLIMIT = 20;

set<string> data[MAXN+5][ANSLIMIT+5];

string str;
string prefix[MAXN+5];
string suffix[MAXN+5];
int ans[MAXN+5];

int a[MAXN+5], b[MAXN+5];

int main()
{
	#ifdef VSP4
		//freopen("input.txt", "r", stdin);
		//freopen("output.txt", "w", stdout);
	#endif
	
	int i, j, k, d;
	
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		cin >> str;
		prefix[i] = str;
		suffix[i] = str;

		for (j = 0; j < str.size(); j++)
		{
			string curr;

			for (k = j; k < str.size(); k++)
			{
				curr.pb(str[k]);

				if (curr.size() > ANSLIMIT)
				{
					break;
				}

				data[i][curr.size()].insert(curr);	
			}
		}

		for (j = 1; j <= ANSLIMIT; j++)
		{
			if (data[i][j].size() == (1 << j))
			{
				ans[i] = j;
			}
			else
			{
				break;
			}
		}
	}

	cin >> m;

	for (i = 1; i <= m; i++)
	{
		cin >> a[i] >> b[i];

		for (j = 1; j <= ANSLIMIT; j++)
		{
			if (data[a[i]][j].size() > data[b[i]][j].size())
			{
				//choose a[i]
				data[n+i][j] = data[a[i]][j];

				for (auto s: data[b[i]][j])
				{
					data[n+i][j].insert(s);
				}
			}
			else
			{
				//choose b[i]
				data[n+i][j] = data[b[i]][j];

				for (auto s: data[a[i]][j])
				{
					data[n+i][j].insert(s);
				}
			}
		}

		prefix[n+i] = prefix[a[i]];

		j = 0;
		while (prefix[n+i].size() < MAXN && (j < prefix[b[i]].size()))
		{
			prefix[n+i].pb(prefix[b[i]][j]);
			j++;
		}

		suffix[n+i] = suffix[b[i]];

		j = suffix[a[i]].size()-1;
		while (suffix[n+i].size() < MAXN && (j >= 0))
		{
			suffix[n+i].insert(0, 1, suffix[a[i]][j]);
			j--;
		}

		str = suffix[a[i]] + prefix[b[i]];

		for (j = 0; j < str.size(); j++)
		{
			string curr;

			for (k = j; k < str.size(); k++)
			{
				curr.pb(str[k]);

				if (curr.size() > ANSLIMIT)
				{
					break;
				}

				data[n+i][curr.size()].insert(curr);	
			}
		}

		for (j = 1; j <= ANSLIMIT; j++)
		{
			if (data[n+i][j].size() == (1 << j))
			{
				ans[n+i] = j;
			}
			else
			{
				break;
			}
		}

		cout << ans[n+i] << "\n";
	}

	return 0;
}
