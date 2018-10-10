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
int A[MAX];
LL B[MAX];
int n;
LL getS(int k)
{
	FOR(i,0,n)
	{
		B[i] = A[i] + (i + 1) * (LL) k;
	}

	sort(B, B + n);
	LL s = 0;
	FOR(i,0, k) s += B[i];
	return s;
}

int main()
{
	//freopen("in.txt", "r", stdin);
	//ios::sync_with_stdio(false); cin.tie(0);
	int s;
	cin >> n >> s;
	FOR(i,0,n) cin >> A[i];

	int l = 0, r = n + 1;
	while (r - l > 1)
	{
		int c = (r + l) /2;
		if (getS(c) <= s)
		{
			l = c;
		}
		else
		{
			r = c;
		}
	}

	cout << l << " " << getS(l) <<endl;
	return 0;
}
