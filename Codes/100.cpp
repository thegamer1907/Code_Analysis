#include <bits/stdc++.h>

using namespace std;

long long n, dp[523456], q;
int main()
{
	cin >> n;
	for(int i = 1; i <= n; i ++)
	{
		cin >> q;
		dp[i] = dp[i - 1] + q;
	}
	long long ans = 0, t = 0;
	for(int i = 1; i < n; i ++)
	{
		if(3 * dp[i] == 2 * dp[n])
			t ++;
	}
	for(int i = 1; i <= n; i ++)
	{
		if(3 * dp[i] == dp[n] * 2 && t > 0)
			t --;
		if(3 * dp[i] == dp[n])
			ans += t;			
	}
	cout << ans;
}