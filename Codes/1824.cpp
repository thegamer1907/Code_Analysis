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

const int MAX = 50;

LL n, m, k;
LL getCnt(LL c)
{
	LL cnt = 0;
	FOR(i,1, n + 1)
	{
		cnt += min((LL)m, c / i);
	}

	return cnt;
}

int main()
{
	//freopen("in.txt", "r", stdin);
	ios::sync_with_stdio(false); cin.tie(0);
	cin >> n >> m >> k;
	LL l = 0, r = LINF;
	while (r - l > 1)
	{
		LL c = (r + l) / 2;
		//cout << c << endl;
		if (getCnt(c) >= k)
		{
			r = c;
		}
		else
		{
			l = c;
		}
	}

	cout << r << endl;
}
