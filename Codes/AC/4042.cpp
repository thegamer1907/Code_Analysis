#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int** a = new int*[n];
	int** dp = new int*[n];
	for (int i = 0; i < n; ++i)
	{
		a[i] = new int[m];
		dp[i] = new int[m];
	}
	
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
			cin >> a[i][j];
	}
	
	int* ans = new int[n];
	for (int i = 0; i < m; ++i)
		dp[n - 1][i] = 1;
	for (int i = 0; i < n; ++i)
		ans[i] = 1;
		
	for (int i = n - 2; i >= 0; --i)
	{
		for (int j = 0; j < m; ++j)
		{
			dp[i][j] = (a[i][j] <= a[i + 1][j]) ? dp[i + 1][j] + 1 : 1;
			ans[i] = max(ans[i], dp[i][j]);
		}
	}
	
	int q, l, r;
	cin >> q;
	while(q--)
	{
		cin >> l >> r;
		--l; --r;
		cout << (ans[l] >= r - l + 1 ? "Yes" : "No") << '\n';
	}
}
