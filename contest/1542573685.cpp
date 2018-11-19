#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <deque>
#include <vector>
#include <set>
#include <utility>
#include <string>
#include <queue>
#include <cstring>
#include <map>
#include <stack>
#include <functional>
#include <math.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const int inf32 = 1e9 + 9;
const ll inf64 = 1e18 + 18;

map<vector<int>, int> mp;
int kol[4];
int n, m;

bool rec(int depth)
{
	if (depth > m) return false;
	if (depth)
	{
		bool flag = true;
		for (int i = 0; i < m; ++i)
		{
			flag &= kol[i] * 2 <= depth;
		}
		if (flag) return true;
	}
	for (auto &x : mp)
	{
		if (!x.second) continue;
		--x.second;
		for (int i = 0; i < m; ++i) kol[i] += x.first[i];
		if (rec(depth + 1)) return true;
		++x.second;
		for (int i = 0; i < m; ++i) kol[i] -= x.first[i];
	}

	return false;
}
int main()
{
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; ++i)
	{
		vector<int> vc(m);
		for (int j = 0; j < m; ++j)	scanf("%d", &vc[j]);
		++mp[vc];
	}
	cout << (rec(0) ? "YES" : "NO");
	return 0;
}