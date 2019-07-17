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
	rint l = 0, r = k;
	for (rint p = 0, s = 0; s < m; )
	{
		bool f = 1;
		rint cnt = 0;
		while (a[s] >= l && a[s] <= r && s < m) s ++, f = 0, cnt ++;
		if (!f) ans ++;
		r += cnt;
		if (a[s] > r)
		{
			l = r+1;
			r = min(l+k-1, n);
			rint x = (a[s]-l)/k;
			l += x*k;
			r += x*k;
		}
	}
	printf ("%lld", ans);
	return 0;
}