#include <bits/stdc++.h>
#define pb push_back
#define fi first
#define se second
#define mid ((x + y) / 2)
#define mp make_pair
#define timer printf("\n%lf seconds.\n", (double)clock() / CLOCKS_PER_SEC)
#define d1(x) cerr<<#x<<":"<<x<<endl;
#define d2(x, y) cerr<<#x<<":"<<x<<" "<<#y<<":"<<y<<endl;
#define d3(x, y, z) cerr<<#x<<":"<<x<<" "<<#y<<":"<<y<<" "<<#z<<":"<<z<<endl;
using namespace std;
typedef long long int lli;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef string string;

const int N = (int)(1e5 + 5);
const int K = (int)(25);
const int LOG = (int)(20);
const int SQ = (int)(316);
const lli inf = (lli)(1e12 + 5);

lli n, k, ar[N], dp[N][K], sum, hm[N], l = 1, r;

void add(int x)
{
	sum += hm[ar[x]]++;
}

void rem(int x)
{
	sum -= --hm[ar[x]];
}

void sett(int x, int y)
{
	while(x > l)
	{
		rem(l);
		l++;
	}

	while(x < l)
	{
		l--;
		add(l);
	}

	while(y > r)
	{
		r++;
		add(r);
	}

	while(y < r)
	{
		rem(r);
		r--;
	}
}

void daq(int ind, int x, int y, int optl, int optr)
{
	if(x > y)
		return;
	
	int opt = optr;
	
	dp[mid][ind] = -1;

	for(int i = min(optr, mid); i >= optl; i--)
	{
		sett(i, mid);
		if(dp[mid][ind] == -1 || dp[mid][ind] >= dp[i - 1][ind - 1] + sum)
		{
			opt = i;
			dp[mid][ind] = dp[i - 1][ind - 1] + sum;
		}
	}

	daq(ind, x, mid - 1, optl, opt);
	daq(ind, mid + 1, y, opt, optr);
}

int main()
{
	// freopen("inp.in", "r", stdin);
	// freopen("out.out", "w", stdout);

	scanf("%d %d", &n, &k);
	for(int i = 1; i <= n; i++)
		scanf("%d", &ar[i]);

	for(int i = 1; i <= n; i++)
		dp[i][0] = inf;

	for(int i = 1; i <= k; i++)
		daq(i, 1, n, 1, n);

	printf("%lld", dp[n][k]);
}