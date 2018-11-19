#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define RFOR(i,b,a) for(int i = (b) - 1; i >= (a); i--)
#define ITER(it, a) for(typeof(a.begin()) it = a.begin(); it != a.end(); it++)
#define FILL(a, value) memset(a, value, sizeof(a))

#define SZ(a) (int) a.size()
#define ALL(a) a.begin(),a.end()
#define PB push_back
#define MP make_pair

typedef long long LL;
typedef vector<int> VI;
typedef pair<int, int> PII;

const double PI = acos(-1.0);
const LL INF = 1000 * 1000 * 1000 + 7;
const LL LINF = INF * (LL)INF;

const int MAX = 100100;
const int MIN = 22;

int A[MAX];
LL C[MAX];

LL DP[MIN][MAX];

int qh, qt;
LL sum;

LL F(LL x)
{
	return x * (x-1) / 2;
}

void add(int x, int val)
{
	sum -= F(C[A[x]]);
	C[A[x]] += val;
	sum += F(C[A[x]]);
}

void remove(int x)
{
	add(x, -1);
}

void add(int x)
{
	add(x, 1);
}

void moveTo(int x, int y)
{
	while(qh > x)
	{
		qh--;
		add(qh);
	}

	while(qt < y)
	{
		qt++;
		add(qt);
	}

	while(qh < x)
	{
		remove(qh);
		qh++;
	}

	while(qt > y)
	{
		remove(qt);
		qt--;
	}
}

LL get(int l, int r)
{
	moveTo(l, r);
	return sum;
}


void solve(int k, int l, int r, int L, int R)
{
	if (l > r) return;
	int m = (l + r) / 2;

	pair<LL, int> res = MP(LINF, INF);
	FOR (i, L, min(m, R) + 1)
	{
		LL cur = get(i, m);
		if (i) cur += DP[k-1][i-1];
		res = min(res, MP(cur, i));
	}

	DP[k][m] = res.first;
	solve(k, l, m-1, L, res.second);
	solve(k, m+1, r, res.second, R);
}

int main()
{
	//freopen("in.txt", "r", stdin);
	//ios::sync_with_stdio(false); cin.tie(0);

	int n, k;
	scanf("%d%d", &n, &k);
	FOR (i, 0, n)
	{
		scanf("%d", &A[i]);
	}

	qh = 0;
	qt = -1;


	FOR (i, 0, n)
	{
		DP[0][i] = LINF;
	}

	FOR (i, 1, k+1)
	{
		solve(i, 0, n-1, 0, n-1);
	}

	LL res = DP[k][n-1];
	cout<<res<<endl;

}
