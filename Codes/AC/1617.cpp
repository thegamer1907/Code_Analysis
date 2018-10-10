#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include <set>
#include <queue>
#include <map>
#include <vector>
#include <assert.h>

using namespace std;
#define mp make_pair
typedef long long ll;
typedef long double ldb;
typedef double db;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;
const int nmax = 1000100;
ll cnt = 1e+9 + 7, res, res_s;
ll n, f, a, b, c, l, r, d, m;
ll el[100010];
priority_queue<ll> q;
int main()
{
	//freopen("input.txt", "rt", stdin); freopen("output.txt", "wt", stdout);
	ios_base::sync_with_stdio(0);
	cin >> n >> m;
	for (int i = 1; i <= n; ++i)
	{
		cin >> el[i];
	}
	l = 0;
	r = n;
	while (l <= r)
	{
		ll mid = (l + r) >> 1;
		for (int i = 1; i <= n; ++i)
		{
			a = el[i] + i * mid;
			q.push(-a);
		}
		a = 1;
		d = 0;
		while (a <= mid)
		{
			d += q.top();
			q.pop();
			++a;
		}
		while (!q.empty())
			q.pop();
		d = -d;
		if (d <= m)
		{
			if (res < mid)
			{
				res = mid;
				res_s = d;
				
			}
			l = mid + 1;
		}
		else
		{
			r = mid - 1;
		}
	}
	cout << res << " " << res_s << endl;
	return 0;
}