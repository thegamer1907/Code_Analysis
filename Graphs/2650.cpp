#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <sstream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <cstring>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <bitset>
#include <ctime>
using namespace std;

#define FOR(i,a,b) for (int i = (a); i < (b); i++)
#define RFOR(i,b,a) for (int i = (b) - 1; i >= (a); i--)
#define ITER(it, a) for(__typeof(a.begin()) it = a.begin(); it != a.end(); it++)
#define FILL(a, value) memset(a, value, sizeof(a))

#define SZ(a) (int)a.size()
#define ALL(a) a.begin(), a.end()
#define PB push_back
#define MP make_pair

typedef long long LL;
typedef vector<int> VI;
typedef pair<int, int> PII;

const double PI = acos(-1);
const int INF = 1000 * 1000 * 1000 + 7;
const LL LINF = INF * (LL)INF;

const int MAX = 1000 * 10 + 47;

struct DSU
{
	int P[MAX];
	void init(int n)
	{
		FOR(i, 0, n) P[i] = i;
	}

	int findP(int v)
	{
		if (v == P[v]) return v;
		return P[v] = findP(P[v]);
	}

	void unionSet(int a, int b)
	{
		a = findP(a);
		b = findP(b);

		if (rand() & 1) swap(a, b);
		P[a] = b;
	}
} dsu;
int main()
{
	//freopen("in.txt", "r", stdin);
	ios::sync_with_stdio(false); cin.tie(0);
	int n;
	cin >> n;

	dsu.init(n);
	FOR(i, 0, n)
	{
		int p;
		cin >> p;
		p--;
		dsu.unionSet(i, p);
	}

	int ans = 0;
	FOR(i, 0, n)
	{
		if (dsu.findP(i) == i) ans++;
	}

	cout << ans << endl;
	return 0;
}