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
	string s;
	cin >> s;
	int n;
	cin >> n;
	vector <string> v(2 * n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		v[i + n] = v[i];
	}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (v[i] == s || (v[i][1] == s[0] && s[1] == v[j][0]) || (v[i][0] == s[1] && s[0] == v[j][1]))
				return cout << "YES" << endl, 0;
	cout << "NO" << endl;
	return 0;
}
