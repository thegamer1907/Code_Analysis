#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e7 + 5;
ll arr[N];
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	vector<int> pr;
	for (int i = 2; i <= 3500; i++)
	{
		bool flag = 0;
		int z = sqrt(i);
		for (int j = 2; j <= z; j++)
		{
			if (i % j == 0)
			{
				flag = 1;
				break;
			}
		}
		if (!flag)
			pr.push_back(i);
	}
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		int z = sqrt(x);
		for (int j = 0; j < pr.size(); j++)
		{
			if (pr[j] > z)
				break;
			bool flag = 0;
			while (x % pr[j] == 0)
				x /= pr[j], flag = 1;
			if (flag)
				arr[pr[j]]++;
			if (x <= 1)
				break;
		}
		if (x > 1)
			arr[x]++;
	}
	for (int i = 1; i < N; i++)
		arr[i] += arr[i - 1];
	int m;
	cin >> m;
	int l, r;
	while (m--)
	{
		cin >> l >> r;
		if (l > 1e7)
		{
			cout << 0 << '\n';
			continue;
		}
		else if (r > 1e7)
			r = 1e7;
		cout << arr[r] - arr[l - 1] << '\n';
	}
	return 0;
}
