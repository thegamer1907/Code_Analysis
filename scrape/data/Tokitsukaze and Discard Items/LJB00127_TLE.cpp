#include <bits/stdc++.h>
#define newline printf ("\n")
#define space printf (" ")
#define cinfalse ios::sync_with_stdio(false)
#define fread(a) freopen (a".in", "r", stdin), freopen(a".out", "w", stdout)
#define rint register int
#define For(i, a, b) for (rint i = a; i <= b; i ++)
#define Low(i, a, b) for (rint i = a; i >= b; i --)
#define FFr(i, a, b, c) for (rint i = a; i <= b; i += c)
#define FLw(i, a, b, c) for (rint i = a; i >= b; i -= c)
#define min(a, b) ((a)>(b)?(b):(a))
#define max(a, b) ((a)>(b)?(a):(b))
#define int long long
using namespace std;

int n, m, k;
#define MAXN 100005
int a[MAXN];
int ans = 0;
signed main ()
{
	scanf ("%lld %lld %lld", &n, &m, &k);
	for (rint i = 0; i < m; i ++) scanf ("%lld", &a[i]);
	sort (a, a+m);
	rint cen = 1;
	for (rint p = 0, s = 0; p < m; )
	{
//		printf ("%lld:\n", p);
		bool f = 1;
		rint q;
		while (f)
		{
//			while (a[s] <= p+k*cen && s < m) f = 0, s ++;
			q = upper_bound(a, a+m, p+k*cen)-a;
//			printf ("%lld\n", q);
			if (q != s) break;
			if (q == s) cen ++;
		}
		p = s = q;
		ans ++;
//		printf ("%lld %lld\n", ans, p);
	}
	printf ("%lld", ans);
	return 0;
}