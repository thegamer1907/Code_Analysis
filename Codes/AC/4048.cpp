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
VI A[MAX];
int R[MAX];

int main()
{
	//freopen("in.txt", "r", stdin);
	ios::sync_with_stdio(false); cin.tie(0);
	int n, m;
	cin >> n >> m;
	FOR(i,0,n)
	{
		A[i].resize(m);
		FOR(j,0,SZ(A[i]))
		{
			cin >> A[i][j];
		}
	}

	FOR(i, 0, n) R[i] = 1;

	FOR(j, 0, m)
	{
		int cnt;
		RFOR(i, n, 0)
		{
			if (i == n - 1 || A[i][j] > A[i + 1][j])
			{
				cnt = 1;
				continue;
			}

			cnt++;
			R[i] = max(R[i], cnt);
		}
	}

	int k;
	cin >> k;
	FOR(i, 0, k)
	{
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		if (R[a] >= b - a + 1)
		{
			cout << "Yes\n";
			continue;
		}

		cout << "No\n";
	}
	return 0;
}

