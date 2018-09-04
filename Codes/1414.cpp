#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <bitset>
#include <cmath>
#include <stack>
#include <string>
#include <iomanip>
#include <queue>
#include <deque>
#include<cstring>
#include<limits>
#include <sstream>
#include <stdio.h>
#include<unordered_map>
using namespace std;
#define sz(x) (x).size()
#define all(v) (v).begin(),(v).end()
#define m_p make_pair
#define ll long long
#define ull unsigned ll
#define endl "\n"
//#define int ll
#define PI 3.14159265
void run()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
#endif
}
void fast()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
// Run away as you wish, you are always traveling between my ribs.
vector<ll>v;
ll s,sum;
bool chk(ll x)
{
	sum = 0;
	if (x > v.size())
		return 0;
	vector<ull>val(v.size());
	for (int i = 0; i < val.size(); i++)
	{
		val[i] = v[i] + ((i + 1)*x);
	}
	sort(all(val));
	int cn = 0;
	for (int i = 0; i < x; i++)
	{
		sum += val[i];
	}
	return sum<=s;
}
int  main()
{
	fast();
	run();
	int n;
	cin >> n >> s;
	v.resize(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	ll st = 0, en = 1e9,mid,ans=-1,mx=1e9;
	while (st <= en)
	{
		mid = (st + en) / 2;
		if (mid == 0)
		{
			st = mid + 1;
			continue;
		}
		if (chk(mid))
		{
			if (mid>ans)
				ans = mid, mx = sum, st = mid + 1;
			else if (mid == ans&&mid)
				mx = min(mx, sum);
		}
		else
			en = mid - 1;
	}
	if (ans == -1)
		ans = 0, mx = 0;
	cout << ans << " " << mx << endl;
     return 0;
	// Work hard in silence, Let SUCCESS be your noise.
}