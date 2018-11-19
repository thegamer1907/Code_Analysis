#include<bits/stdc++.h>
using namespace std;
#define FOR(i,s,e) for(int i = (s); i < (e); i++)
#define FOE(i,s,e) for(int i = (s); i <= (e); i++)
#define FOD(i,s,e) for(int i = (s); i >= (e); i--)
#define ll long long
#define pb push_back
#define mp make_pair

int n, m, x, y, z, k, w, fl, fr;
ll dp[22][100005], fuck;
int A[100005], freq[100005];

int tl, tr, bestpos;
ll tmp, add;

void freq_update(int l, int r)
{
	while (fl < l) { freq[A[fl]]--; add -= freq[A[fl]]; fl++; }
	while (fl > l) { fl--; add += freq[A[fl]]; freq[A[fl]]++; }
	while (fr < r) { fr++; add += freq[A[fr]]; freq[A[fr]]++; }
	while (fr > r) { freq[A[fr]]--; add -= freq[A[fr]]; fr--; }
}

void solve(int l, int r, int bestl, int bestr)
{	
	int mid = (l + r) >> 1;
	
	tl = bestl;
	tr = min(bestr, mid - 1);
	
	FOE(i, tl, tr)
	{
		freq_update(i + 1, mid); 
		tmp = dp[m - 1][i] + add;
		
		if (i == tl || tmp < dp[m][mid]) 
		{
			bestpos = i;
			dp[m][mid] = tmp;
		}
	}
	
	if (l < mid) solve(l, mid - 1, bestl, bestpos);
	if (mid < r) solve(mid + 1, r, bestpos, bestr);
}

int main ()
{
	scanf("%d %d", &n, &k);
	FOE(i, 1, n) scanf("%d", &A[i]);
	
	FOE(i, 1, n)
	{
		add += freq[A[i]];
		dp[1][i] = add;
		freq[A[i]]++;
	}
	
	fl = 1;
	fr = n;
	
	FOE(i, 2, k) 
	{
		m = i;
		solve(i, n, i - 1, n);
	}
	
//	printf("%lld\n", fuck);
	printf("%lld\n", dp[k][n]);
	return 0;
}