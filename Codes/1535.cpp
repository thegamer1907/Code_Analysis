#pragma comment(linker, "/STACK:100000000")
#pragma GCC optimize("O3")
#define _CRT_SECURE_NO_WARNINGS
#include <fstream>
#include <iostream>
#include <string>
#include <complex>
#include <math.h>
#include <set>
#include <vector>
#include <map>
#include <queue>
#include <stdio.h>
#include <stack>
#include <algorithm>
#include <list>
#include <ctime>

#include <memory.h>
#include <assert.h>

using namespace std;

#define ll long long 
#define pb push_back
#define ppb pop_back

#define y1 aasdfasdfasdf

const ll N = 1e5 + 10;
const ll mod = 1e9 + 7;
const ll INF = 1e18;
const ll inf = -1e18;
const ll M = 1e6;

ll n, s, a[N], l, r, b[N];

bool check(ll x)
{
	for (ll i = 1; i <= n; i++)
	{
		b[i] = a[i] + i * x;
	}
	sort(b + 1, b + n + 1);
	ll sum = 0;
	for (int i = 1; i <= x; i++)
	{
		sum += b[i];
	}
	return (sum <= s);
}

int main()
{
	cin >> n >> s;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	l = 0, r = n;
	while (r - l > 1)
	{
		int mid = (r + l) >> 1;
		if (check(mid) == true)
		{
			l = mid;
		}
		else
		{
			r = mid;
		}
	}
	if (check(r) == true) l = r;
	cout << l << " ";
	for (ll i = 1; i <= n; i++)
	{
		a[i] = a[i] + i * 1ll * l * 1ll;
	}
	sort(a + 1, a + n + 1);
	ll sum = 0;
	for (int i = 1; i <= l; i++)
	{
		sum += a[i];
	}
	cout << sum;
	cin.get(), cin.get();
	return 0;
}