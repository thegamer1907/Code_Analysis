#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <algorithm>

using namespace std;

#define int long long int
#define endl '\n'
#define fi first
#define se second

void doRoutine()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

signed main()
{
	doRoutine();
	int n, k;
	cin >> n >> k;
	vector <int> a(20);
	for (int i = 0; i < n; i++)
	{
		vector <int> b(k);
		for (int j = 0; j < k; j++)
			cin >> b[j];
		int x = 0;
		for (int j = 0; j < k; j++)
			x += b[j] * (1 << j);
		a[x]++;
	}
	for (int i = 0; i < 16; i++)
		for (int j = 0; j < 16; j++)
			if (a[i] && a[j] && (i & j) == 0)
				return cout << "YES" << endl, 0;
	cout << "NO" << endl;
	return 0;
}
