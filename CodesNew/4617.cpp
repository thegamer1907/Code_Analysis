#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 5e5 + 5;
bool vis[N];
vector<int> v;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	v.resize(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	sort(v.begin(), v.end());
//	for (int i = 0; i < n; i++)
//		cout << v[i] << " ";
//	return 0;
	int ans = 0, e = n / 2;
	for (int i = 0; i < n; i++)
	{
		if (vis[i])
			continue;
		while (e < n && ((v[e] < v[i] * 2) || vis[e]))
			e++;
		if (e >= n)
			break;
		if (v[e] >= 2 * v[i])
		{
			vis[e] = 1;
			vis[i] = 1;
			e++;
			ans++;
		}
	}
	cout << n - ans << endl;
	return 0;
}
