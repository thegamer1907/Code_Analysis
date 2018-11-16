#define _CRT_SECURE_NO_WARNINGS
#include <bits\stdc++.h>
using namespace std;
typedef long long ll;
int a[101];
int n;
int flip(int i, int j)
{
	int ans = 0;
	for (int k = 0; k < 100; k++)
	{
		int t = a[k];
		if (k >= i && k <= j)
		{
			t = 1 - t;
		}
		if (t == 1)
			ans++;
	}
	return ans;
}
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			int t = flip(i, j);
			ans = max(ans, t);
		}
	}
	cout << ans << endl;
	return 0;
}