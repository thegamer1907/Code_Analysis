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

const int MAX = 10000 * 1000 + 47;

int A[MAX];
LL P[MAX];

LL get(int l, int r)
{
	r = min(r, MAX - 1);
	if (l > r) return 0;
	return P[r] - P[l - 1];
}

int main()
{
	//freopen("in.txt", "r", stdin);
	//ios::sync_with_stdio(false); cin.tie(0);
	for(int k = 2; k * k < MAX; k++)
	{
		if (A[k]) continue;
		int i = k * k;
		while (i < MAX)
		{
			if (!A[i])
			{
				A[i] = k;
			}

			i += k;
		}
	}


	FOR(i, 2, MAX)
	{
		if (A[i] == 0) A[i] = i;
	}

	int n;
	scanf("%d", &n);
	FOR(i,0, n)
	{
		int x;
		scanf("%d", &x);
		while (x != 1)
		{
			int p = A[x];
			P[p]++;
			while (x % p == 0) x /= p;
		}
	}

	FOR(i, 0, MAX)
	{
		if (!i) continue;

		P[i] += P[i - 1];
	}

	int m;
	scanf("%d", &m);
	FOR(i,0, m)
	{
		int l, r;
		scanf("%d%d", &l, &r);
		LL res = get(l, r);
		printf("%lld\n", res);
	}

	return 0;
}
