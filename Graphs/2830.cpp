#include<bits/stdc++.h>
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

const int MAX = 1000 * 100 + 47;
int C[MAX];
VI g[MAX];
set<int> S[MAX];

int main()
{
	//freopen("in.txt", "r", stdin);
	ios::sync_with_stdio(false); cin.tie(0);
	int n, m;
	cin >> n >> m;
	FOR(i,0,n)
	{
		cin >> C[i];
		C[i]--;
	}

	FOR(i,0,m)
	{
		int a,b;
		cin >> a >> b;
		a--;
		b--;
		g[a].PB(b);
		g[b].PB(a);
	}

	FOR(i,0,n)
	{
		int cur = C[i];
		FOR(j, 0, SZ(g[i]))
		{
			int to = g[i][j];
			if (cur == C[to]) continue;
			S[cur].insert(C[to]);
		}
	}

	int mx = SZ(S[C[0]]);
	int ind = C[0];
	FOR(i,0, n)
	{
		int c = C[i];
		int val = SZ(S[c]);
		if (mx < val)
		{
			mx = val;
			ind = c;
		}

		if (mx == val && ind > c)
		{
			ind = c;
		}
	}

	cout << ind + 1 << endl;
	return 0;
}
