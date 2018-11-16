//Be Name Khoda
//Ahay! Hormat ha hefz she baradare man ... 
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using ordered_set =  tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T> using ordered_multiset =  tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long ll;
typedef long double ld;
const int MOD = (int)1e9 + 7;
const int MAXN = (int)5e2 + 7;
const ll inf = (ll)1e18;
const int infint = (int)1e9;
char c[MAXN][MAXN];
int dp[MAXN][MAXN];
int main()
{
	int h, w;
	cin >> h >> w;
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++)
			cin >> c[i][j];
	dp[0][0] = 0;
	for (int i = 1; i < w; i++)
	{
		dp[0][i] = dp[0][i - 1];
		if(c[0][i] == '.' and c[0][i - 1] == '.')
			dp[0][i]++;
	}
	for (int i = 1; i < h; i++)
	{
		dp[i][0] = dp[i - 1][0];
		if(c[i][0] == '.' and c[i - 1][0] == '.')
			dp[i][0]++;
	}
	for (int i = 1; i < h; i++)
		for (int j = 1; j < w; j++)
		{
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
			if(c[i][j] == '.' and c[i][j - 1] == '.')
				dp[i][j]++;
			if(c[i][j] == '.' and c[i - 1][j] == '.')
				dp[i][j]++;
		}
	int q;
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		int r1, c1, r2, c2;
		cin >> r1 >> c1 >> r2 >> c2;
		r1--, c1--, c2--, r2--;
		int ans = dp[r2][c2];
		if(c1 != 0)
			ans -= dp[r2][c1 - 1];
		if(r1 != 0)
			ans -= dp[r1 - 1][c2];
		
		if(r1 != 0 and c1 != 0)
			ans += dp[r1 - 1][c1 - 1];
		if(r1 != 0)
			for (int i = c1; i <= c2; i++)
				if(c[r1][i] == '.' and c[r1 - 1][i] == '.')
					ans--;
		if(c1 != 0)
			for (int i = r1; i <= r2; i++)
				if(c[i][c1] == '.' and c[i][c1 - 1] == '.')
					ans--;
		
		cout << ans << "\n";
	}
}
