#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <string>
#include <iostream>
#include <complex>
#include <ctime>
#include <cmath>
#include <cstdio>
#include <stack>
#include <map>
#include <list>
#include <queue>
#include <deque>
#include <set>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <array>
#include <forward_list>
#include <iomanip>
#include <utility>

#define mp make_pair
#define pb push_back

using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

ll n;

bool ch(ll a)
{
	ll sum = 0, now = n;
	while (now > 0)
	{
		sum += min(a, now);
		now -= min(a, now);
		now -= now / 10;
	}
	return (sum * 2) >= n;
}

int main()
{
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#else
	//freopen("river.in", "r", stdin);
	//freopen("river.out", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	ll l = 1, r = n + 1;
	while (r - l > 1)
	{
		ll mid = (l + r) / 2;
		if (!ch(mid))
			l = mid;
		else
			r = mid;
	}
	if (ch(l))
		cout << l;
	else
		cout << l + 1;
	return 0;
}