// IN THE NAME OF GOD
#include <bits/stdc++.h>
using namespace std;
#define Precision(i) cout << fixed << setprecision(i)
#define endl '\n'
typedef long long ll;
typedef long double ld;
typedef pair <int, int> pii;
typedef pair <long long, long long> pll;
const ll N = 3e5 + 100, MOD = 1e9 + 7, INF = 1e15 + 10, SQ = 370, LOG = 30;
ll n , m, x, y, z, t, now, d, cur,  k, a[N], dp[N], sum,ptr, ans, l,  ptr1, ptr2;
int main ()   
{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n >> t;
	for (int i = 1; i <= n; i++) 
	{
		cin >> a[i];
		if (i) dp[i] = dp[i-1];
		dp[i] += 1 - a[i];
	}
	for (int i = 1; i <= n; i++)
	{
		int b = i, e = n + 1, mid;
		while (e - b > 1)
		{
			mid = e + b >> 1;
			if (dp[mid] - dp[i-1] <= t) b = mid;
			else e = mid;
		}
		if (dp[b] - dp[i-1] <= t)
		{
			if (b - i + 1 > ans)
			{
				ans = b - i + 1;
				cur = i;
			}
		}
	}
	cout << ans << endl;
	for (int i = 1; i <= n; i++)
	{
		if (i >= cur && t && !a[i]) 
		{
			t--;
			cout << 1 << ' ';
		}
		else
		{
			cout << a[i] << ' ';
		}
	}
} 
