#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <sstream>
#include <map>
#include <queue>
#include <set>
#include <vector>
#include <stack>
//#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mp make_pair
ll power(ll x ,ll y)
{
	if (!y)return 1;
	if (y % 2)return x*power(x*x, y / 2);
	return power(x*x, y / 2);
}


ll n, S,x[100100];
pair<ll, ll>MAX(pair<ll, ll>a1, pair < ll, ll > a2)
{
	if (a1.first > a2.first)return a1;
	if (a1.first == a2.first&&a1.second <= a2.second)return a1;
	return a2;
}
pair<ll, ll> bs(int s, int e, int mid)
{
	if (s > e)return mp(0, 0);
	int m = mid;
	vector <ll>t;
	for (int i = 1; i <= n; i++)t.push_back(x[i] + i*mid);
	sort(t.begin(), t.end());
	ll sum = 0;
	int q = 0;
	for (int i = 0; i < m; i++)
	{
		if (sum + t[i]>s){ q = 1; break; }
		sum += t[i];
	}
	if (q)return bs(s, mid - 1, s + (mid - s) / 2);
	return MAX(mp(mid, sum), bs(mid + 1, e, mid + 1 + (e - mid) / 2));
}

int  main()
{

	scanf("%d%d", &n, &S);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &x[i]);
	}

	pair<ll, ll>p = mp(0, 0);
	int s = 1, e = n, mid = 1 + n / 2;
	while (s <= e)
	{
		int m = mid;
		vector <ll>t;
		for (int i = 1; i <= n; i++)t.push_back(x[i] + i*(ll)mid);
		sort(t.begin(), t.end());
		ll sum = 0;
		int q = 0;
		for (int i = 0; i < m; i++)
		{
			if (sum + t[i]>S){ q = 1; break; }
			sum += t[i];
		}
		if (q)e = mid - 1, mid = s + (mid - s) / 2;
		else  {
			p = MAX(mp(mid, sum), p);
			s = mid + 1, mid = mid + 1 + (e - mid) / 2;
		}
	}
	
	cout << p.first << ' ' << p.second;
	return 0;
}