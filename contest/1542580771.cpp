#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;
typedef long long ll;
const int MAXN = 100500;

int n, k;
int cnt[16];
int arr[4];

bool check(vector <int> &cur, int k)
{
	if (cur.empty())
		return false;
	for (int i = 0; i < k; i++)
		arr[i] = 0;
	for (int val : cur)
		for (int i = 0; i < k; i++)
			if (val & (1 << i))
				arr[i]++;

	int maxcnt = 0;
	for (int i = 0; i < k; i++)
		maxcnt = max(maxcnt, arr[i]);

	return 2 * maxcnt <= cur.size(); 
}

int main()
{                                                     
	ios_base::sync_with_stdio(0);
		
	cin >> n >> k;
	for (int i = 0; i < n; ++i)
	{
		int val = 0;
		for (int j = 0; j < k; j++)
		{
			char c;
			cin >> c;
			if (c == '1')
			{
				val |= (1 << j);
			}
		}

		cnt[val]++;
	}

	bool ok = false;
	for (int mask = 0; mask < (1 << (1 << k)); mask++)
	{
		vector <int> cur;
		for (int val = 0; val < (1 << k); val++)
		{
			if ((mask & (1 << val)) && cnt[val] > 0)
				cur.push_back(val);
		}

		ok |= check(cur, k);
	}

	cout << (ok ? "YES\n" : "NO\n");
	
	return 0;
}
