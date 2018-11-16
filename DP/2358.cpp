#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <functional>
#include <queue>
#include <bitset>
#include <sstream>
#include <set>
#include <iomanip>
#include <string.h>
#include <unordered_map>
#include <unordered_set>
#include <limits.h>
#include <iterator>
#include <complex>

#ifdef _MSC_VER
#  include <intrin.h>
#  define __builtin_popcount __popcnt
#endif

using namespace std;

//                                          //AUTHOR: Hugo Garcia
//                                          //IDEA: 

//======================================================================================================================

#define FOR(i, a, b) for(ll i=ll(a); i<ll(b); i++)
#define ROF(i, a, b) for(ll i=ll(a); i>=ll(b); i--)
#define pb push_back
#define mp make_pair
#define lld I64d
#define all(a) (a).begin(), (a).end()
#define ifile(a) freopen((a), "r", stdin)
#define ofile(a) freopen((a), "w", stdout)
#define sync ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define PI 3.1415926535897932384626433832795
#define mem(x, val) memset((x), (val), sizeof(x))
#define readarr(a, b) FOR(i, 0, (b)) scanf("%lld", &(a)[i])
#define sz(x) (ll)(x).size()
#define sc(x) scanf("%lld", &(x))
#define debug(...) fprintf(stderr, VA_ARGS), fflush(stderr)
#define endl '\n'
#define clockon int t = 1; while (t--) { clock_t z = clock();
#define clockoff debug("Elapsed Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC); }
#define oo 2000000000000000000LL
#define EPS 1e-6

typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll, ll> ii;
typedef vector<ii> vii;

#define MOD 1000000007

//----------------------------------------------------------------------------------------------------------------------
ll dp[105][15];
char str[105];
string dpk[105][15];

//----------------------------------------------------------------------------------------------------------------------

int main()
{
	scanf("%s", &str);
	dp[0][0] = 1;
	dp[0][(str[0] - '0') % 8] = 1;
	dpk[0][(str[0] - '0') % 8] = str[0];

	FOR(i, 1, strlen(str))
	{
		FOR(j, 0, 8)
		{
			if (dp[i - 1][j])
			{
				dpk[i][j] = dpk[i - 1][j];
				dpk[i][(j * 10 + str[i] - '0') % 8] = dpk[i - 1][j] + str[i];
			}

			dp[i][j] |= dp[i - 1][j];
			dp[i][(j * 10 + str[i] - '0') % 8] |= dp[i - 1][j];
		}
	}

	FOR(i, 0, strlen(str))
	{
		if (dp[i][0] &&
			dpk[i][0].length() > 0)
		{
			cout << "YES" << endl;
			cout << dpk[i][0] << endl;
			break;
		}

		if (i == strlen(str) - 1)
		{
			cout << "NO" << endl;
		}
	}

	return 0;
}

//======================================================================================================================