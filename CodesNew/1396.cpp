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

int C[5];
int N[5];
int P[5];

int getInd(char ch)
{
	if (ch == 'B') return 0;
	if (ch == 'S') return 1;
	return 2;
}

int isEnd()
{
	FOR(i, 0, 3)
	{
		if (N[i] != 0) return false;
	}

	return true;
}

int main()
{
	//freopen("in.txt", "r", stdin);
	//ios::sync_with_stdio(false); cin.tie(0);
	string s;
	cin >> s;
	FOR(i,0,3) cin >> N[i];
	FOR(i,0,3) cin >> P[i];

	FOR(i,0, SZ(s))
	{
		C[getInd(s[i])]++;
	}

	FOR(i,0, 3)
	{
		if (C[i] == 0) N[i] = 0;
	}

	LL r;
	cin >> r;
	LL ans = 0;
	while (!isEnd() && r > 0)
	{
		FOR(i, 0, 3)
		{
			if (N[i] - C[i] < 0)
			{
				r -= P[i] * (C[i] - N[i]);
				N[i] = C[i];
			}
		}

		if (r < 0) break;
		FOR(i,0,3) N[i] -= C[i];
		ans++;
	}

	if (r > 0)
	{
		ans += r / (P[0] * C[0] + P[1] * C[1] + P[2] * C[2]);
	}

	cout << ans << endl;
	return 0;
}
