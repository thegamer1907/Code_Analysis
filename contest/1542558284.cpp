#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <vector>
#include <cmath>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <cstdio>
#include <random>
#include <ctime>
#include <cassert>
#include <bitset>
#include <unordered_map>
#include <stack>

using namespace std;

#define N 100001
#define M 370
#define LOCAL 0
mt19937 gen(time(NULL));
#define forn(i, n) for (int i = 0; i < n; i++)
#define fornv(i, n) for (int i = n - 1; i >= 0; i--)
#define pii pair<int, int>
#define forlr(i, l, r) for (int i = l; i <= r; i++)
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define all(a) (a).begin(), (a).end()
#define mp make_pair

typedef long long ll;
const int inf = 1e9;
const int mod = 1e9 + 7;
const double eps = 1e-9;

#define p p2
#define endl '\n'

inline int read()
{
	int val = 0, sign = 1; char ch;
	for (ch = getchar(); ch < '0' || ch > '9'; ch = getchar())
		if (ch == '-') sign = -1;
	for (; ch >= '0' && ch <= '9'; ch = getchar())
		val = val * 10 + ch - '0';
	return sign * val;
}

ll dp[21][N];
int tmp[N], w[N];

ll add(int x)
{
	return tmp[x]++;
}

ll erase(int x)
{
	return --tmp[x];
}

int n, k;
int a = 0, b = 0;

ll res = 0;

ll calc(int l, int r)
{
	if (l > r) return 0;

	//printf("l = %d r = %d\n", l, r);
	while (a > l) res += add(w[--a]);
	while (b <= r) res += add(w[b++]);
	while (a < l) res -= erase(w[a++]);
	while (b - 1 > r) res -= erase(w[--b]);
	//printf("a = %d b = %d\n", a, b);
	return res;
}

void divide(int u, int l, int r, int L, int R)
{
	if (l > r) return;

	int m = (l + r) / 2, opt = L;

	auto &layer = dp[u - 1];
	auto &curr = dp[u][m];

	//ll take = calc(L + 1, m);
	ll to, take;

	curr = 1e18;

	for (int i = L; i <= min(m - 1, R); i++)
	{
		to = layer[i];
		take = calc(i + 1, m);
		//printf("l = %d, r = %d, val = %lld\n", i + 1, m, take);
		if (to + take < curr)
		{
			curr = to + take;
			opt = i;
		}
	}

	divide(u, l, m - 1, L, opt);
	divide(u, m + 1, r, opt, R);
}

//ll dp2[21][N];

void solve()
{
	//prcc();
	//ll total = 0;
	clock_t zeit = clock();
	n = read(), k = read();
	forn(i, n) w[i] = read();

	//forn(i, n) els[w[i]].push_back(i);

	ll curr = 0;
	forn(i, n)
	{
		curr += tmp[w[i]];
		tmp[w[i]]++;
		//	dp2[1][i] = dp[1][i] = curr;
		dp[1][i] = curr;
	}

	forn(i, n) tmp[w[i]] = 0;

	//prcc();
	//debug("Precalc : %.3f\n", (double)(clock() - zeit) / CLOCKS_PER_SEC);
	//zeit = clock();

	for (int e = 2; e <= k; e++)
	{
		divide(e, 0, n - 1, 0, n - 1);
		debug("Time = %.3f\n", (double)(clock() - zeit) / CLOCKS_PER_SEC);
		//total += ops, ops = 0;
		//calls = 0;
		zeit = clock();
	}

	//printf("ops = %lld\n", total);
	printf("%I64d\n", dp[k][n - 1]);

	/*for (int e = 2; e <= k; e++)
	{
	forn(i, n)
	{
	ll curr = 0;
	fill_n(tmp, N, 0);
	dp2[e][i] = 1e18;
	fornv(j, i)
	{
	curr += tmp[w[j]];
	tmp[w[j]]++;

	ll cha = curr + (j ? dp[e - 1][j - 1] : 0);
	dp2[e][i] = min(dp2[e][i], cha);
	}
	}
	}

	printf("%I64d\n", dp2[k][n - 1]);

	if (dp2[k][n - 1] != dp[k][n - 1])
	{
	printf("%d %d\n", n, k);
	forn(i, n) printf("%d ", w[i]);
	}*/
}

int main()
{
	int t = 1;
	//totale = clock();
	if (LOCAL)
		freopen("test.out", "r", stdin);

	while (t--)
	{
		clock_t z = clock();
		solve();
		debug("Elapsed Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
	}
}