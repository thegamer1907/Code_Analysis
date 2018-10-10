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
	//system("pause");
	exit(0);
}

ll n, d;
pair<ll, ll> A[100005];

int main()
{
	//freopen(".in","r",stdin);
	//freopen(".out", "w", stdout);
	ios::sync_with_stdio(false);

	cin >> n >> d;
	for (ll i = 0; i < n; i++)
	{
		cin >> A[i].first >> A[i].second;
	}
	sort(A,A+n);
	ll sum = 0;
	ll l = 0, r = 0;
	while (A[r].first - A[l].first < d && r<n)
	{
		sum += A[r].second;
		r++;
	}
	//cout << r << endl;
	r--;
	ll curr = sum;
	while (true)
	{
		if (l == r || A[r].first - A[l].first < d)
		{
			curr += A[r + 1].second;
			if (curr > sum  && A[r + 1].first - A[l].first < d) sum = curr;
		}
		else
		{
			curr -= A[l].second;
			if (curr > sum  && A[r].first - A[l + 1].first < d) sum = curr;
		}
		if (r == n) break;
		if (l == r || A[r].first - A[l].first < d)
		{
			r++;
		}
		else
		{
			l++;
		}
	}
	cout << sum;

	stop();
}