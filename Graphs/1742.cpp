#include <cstdio>
#include <cstring>
#include <ctype.h>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <deque>
#include <vector>
#include <queue>
#include <string>
#include <map>
#include <stack>
#include <set>
#include <list>
#include <numeric>
#include <sstream>
#include <iomanip>
#include <limits>

#define CLR(a, b) memset(a, (b), sizeof(a))
#define pb push_back

#ifdef LOCAL_JUDGE
#define gets gets_s
#endif

using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;
typedef pair<string, int> psi;
typedef pair<string, string> pss;

const double PI = acos(-1.0);
const double E = exp(1.0);
const double eps = 1e-30;

const double INFD = 1e20;
const ll INFLL = 0x3f3f3f3f3f3f3f3fll;
const int INF = 0x3f3f3f3f;
const int maxn = (int)3e4 + 10;
const int MAXN = (int)1e2 + 10;
const int MOD = (int)1e9 + 7;

int n, k;

int a[maxn];

void solve()
{
	int cnt = 1;
	while (1)
	{
		cnt += a[cnt];
		//cout << cnt << endl;
		if (cnt > k)
		{
			cout << "NO" << endl;
			return;
		}
		if (cnt == k)
		{
			cout << "YES" << endl;
			return;
		}
	}
}

void RUN()
{
	while (cin >> n >> k)
	{
		for (int i = 1; i < n; ++i)
		{
			cin >> a[i];
		}
		solve();
	}
}

int main()
{
#ifdef LOCAL_JUDGE
	freopen("Text.txt", "r", stdin);
#endif // LOCAL_JUDGE
	ios::sync_with_stdio(false);
	cin.tie(0);
	RUN();
#ifdef LOCAL_JUDGE
	fclose(stdin);
#endif // LOCAL_JUDGE
	return 0;
}