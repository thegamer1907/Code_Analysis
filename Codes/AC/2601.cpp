#include <bits/stdc++.h>

#define MAX 10000010
using namespace std;

int n, q, l, r, x;
int p[MAX];
int bit[MAX];

inline void sieve()
{
	for (int i = 2; i < MAX; ++i)
	{
		if (!p[i])
		{
			for (int j = i; j < MAX; j += i)
			{
				p[j] = i;
			}
		}
	}
}

inline vector<int> fat(int x)
{
	vector<int> ret;
	while (x > 1)
	{
		ret.push_back(p[x]);
		x /= p[x];
	}
	return ret;
}

int query(int idx)
{
	int sum = 0;
	while (idx > 0)
	{
		sum += bit[idx];
		idx -= (idx & -idx);
	}
	return sum;
}

void update(int idx, int v)
{
	while (idx < MAX)
	{
		bit[idx] += v;
		idx += (idx & -idx);
	}
}

int main(void)
{
	ios :: sync_with_stdio(false);
	sieve();
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> x;
		vector<int> ret = fat(x);
		ret.erase(unique(ret.begin(), ret.end()), ret.end());
		for (int i = 0; i < ret.size(); ++i)
		{
			update(ret[i], 1);
		}
	}
	
	cin >> q;
	while (q--)
	{
		cin >> l >> r;
		l = min(l, MAX - 1);
		r = min(r, MAX - 1);
		cout << query(r) - query(l - 1) << "\n";
	}
	return 0;
}