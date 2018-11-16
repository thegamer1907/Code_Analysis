#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

#define int long long
const int BASE = 1e+9 + 7;
const int N = 1e+5 + 1;
int dp[N];

signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int t, k;
	cin >> t >> k;

	dp[0] = 1;
	for (int i = 1; i < N; i++)
		dp[i] = (dp[i - 1] + (i - k >= 0 ? dp[i - k] : 0)) % BASE;

	for (int i = 1; i < N; i++)
		dp[i] = (dp[i] + dp[i - 1]) % BASE;

	while (t--) {
		int a, b;
		cin >> a >> b;
		cout << (BASE + dp[b] - dp[a - 1]) % BASE << '\n';
	}
}
