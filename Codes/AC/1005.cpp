#include <bits/stdc++.h>

using namespace std;

#define rfile freopen("input.txt", "r", stdin)
#define wfile freopen("output.txt", "w", stdout)
#define files rfile; wfile

typedef long long ll;
typedef long double ld;
typedef vector< int > vi;
typedef vector< char > vc;
typedef vector< vi > vvi;
typedef map< int, int > mapT;
typedef pair< int, int > pairT;

int main()
{
	int n, k, len = 0, l, r;
	scanf("%d %d", &n, &k);
	string s;
	cin >> s;
	vvi dp(2, vi(n));
	for (int i = 0; i < n; i++)
		dp[0][i] = (s[i] == 'b' ? 1 : 0) + (i > 0 ? dp[0][i - 1] : 0);
	for (int i = 0; i < n; i++)
		dp[1][i] = (s[i] == 'a' ? 1 : 0) + (i > 0 ? dp[1][i - 1] : 0);
	r = 0;
	for (l = 0; l < n; l++)
	{
		while (r < n && dp[0][r] - (l > 0 ? dp[0][l - 1] : 0) <= k)
			r++;
		len = max(len, r - l);
	}
	r = 0;
	for (l = 0; l < n; l++)
	{
		while (r < n && dp[1][r] - (l > 0 ? dp[1][l - 1] : 0) <= k)
			r++;
		len = max(len, r - l);
	}
	printf("%d", len);
	return 0;
}