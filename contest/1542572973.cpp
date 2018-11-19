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
#define M 20
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

int cnt[16];

void solve()
{
	int n = read(), k = read();

	forn(i, n)
	{
		int e = 0;
		forn(j, k)
		{
			int u = read();
			e = 2 * e + u;
		}
		cnt[e]++;
	}

    forn(i, (1 << k))
        forn(j, (1 << k))
            if ((i & j) == 0 && cnt[i] && cnt[j])
            {
                puts("YES");
                return;
            }
	puts("NO");
}

int main()
{
	int t = 1;

	if (LOCAL)
		freopen("test.out", "r", stdin);

	while (t--)
	{
		clock_t z = clock();
		solve();
		debug("Elapsed Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
	}
}