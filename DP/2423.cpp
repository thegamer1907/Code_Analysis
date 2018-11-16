#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <set>

//#include "BigInt.h"

using namespace std;

#define ll long long
#define ull unsigned long long
const ll INF = 999999999999999999;
const double PI = acos(-1.0);

void stop()
{
#ifndef ONLINE_JUDGE
	system("pause");
#endif
	exit(0);
}

ll t, k;
const ll eps = 1000000007;
ll dp[100005];
ll sum[100005];

int main()
{
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	ios::sync_with_stdio(false);

	cin >> t >> k;
	dp[0] = 1;
	for (ll i = 1; i <= 100000; i++)
	{
		dp[i] = dp[i - 1];
		if (i - k >= 0) dp[i] += dp[i - k];
		dp[i] %= eps;
	}
	sum[0] = 0;
	sum[1] = dp[1];
	for (ll i = 2; i <= 100000; i++)
	{
		sum[i] = sum[i - 1] + dp[i];
		sum[i] %= eps;
	}
	ll a, b;
	/*cout << "----" << endl;
	for (ll i = 1; i <= 10; i++)
	{
		cout << i << " " << dp[i] << endl;
	}
	cout << "----" << endl;*/
	for (ll i = 0; i < t; i++)
	{
		cin >> a >> b;
		if (sum[b] >= sum[a-1])
		{
			cout << sum[b] - sum[a-1] << endl;
		}
		else
		{
			cout << eps + sum[b] - sum[a-1] << endl;
		}
	}
	//cout << 6887284954 % eps;

	stop();
}