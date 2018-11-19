#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = (int)1e9 + 7;
const int infint = (int)1e9;
const ll inf = (ll)1e18;
const int MAXN = 1e5 + 3;
map<vector<int>, int> M;
vector<int> c[20];
int n, k, oc[MAXN];
vector<int> rev(vector<int> a)
{
	for (int i = 0; i < a.size(); i++)
		a[i] = 1 - a[i];
	return a;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		vector<int> cur;
		for (int j = 0; j < k; j++)
		{
			int bit;
			cin >> bit;
			cur.push_back(bit);
		}
		M[cur] = 1;
	}
	int cnt = 0;
	for (auto u : M)
	{
		c[cnt++] = u.first;
		if(M.count(rev(u.first)))
			return cout << "YES", 0;
	}
	for (int i = 1; i < (1 << cnt); i++)
	{
		memset(oc, 0, sizeof oc);
		int sz = 0;
		for (int j = 0; j < cnt; j++)
			if((i >> j) & 1)
			{
				for (int p = 0; p < k; p++)
					oc[p] += c[j][p];
				sz++;
			}
		bool flag = 0;
		for (int j = 0; j < 4; j++)
			if(oc[j] > sz / 2)
				flag = 1;
		if(flag == 0)
			return cout << "YES", 0;
	}
	cout << "NO";
}
