#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#include <conio.h>
#define ll long long
#define MAX (int)1e7
#define MX 1e18
#define pii pair<int,int>
using namespace std;




int f[MAX];
int a[MAX];
int n;
int main()
{

	//	freopen("input.txt", "r", stdin);	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		f[i] = f[i - 1] + a[i];
	}

	if (f[n] == n)
	{
		cout << n - 1;
		return 0;
	}
	int res = 0;
	int cnt0, cnt1;

	for (int i = 1; i < n; i++)
	{
		for (int j = i + 1; j <= n; j++)
		{
			
			res = max(res, f[j] - f[i - 1]);
			//cout << i << "    " << j << "   " << cnt0 + f[i - 1] + f[n] - f[j] << endl;
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j <= n; j++)
		{
			cnt1 = f[j] - f[i-1];
			cnt0 = (j - i + 1) - cnt1;
			res = max(res, cnt0 + f[i - 1] + f[n] - f[j]);
			//cout << i << "    " << j << "   " << cnt0 + f[i - 1] + f[n] - f[j] << endl;
		}
	}

	cout << res;

	return 0;
}