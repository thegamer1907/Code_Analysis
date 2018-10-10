#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 3e5 + 100;

bool check(ll n, ll k)
{
	ll remain = n;
	ll sum = 0;
	while (remain)
	{
		sum += min(remain, k);
		remain -= min(remain, k);
		remain -= remain / 10;
	}
	return sum >= (n + 1) / 2;
}

int main()
{
	ll n;
	cin >> n;
	ll l = 1, r = 2e18, mid;
	while (l <= r)
	{
		mid = l + (r - l) / 2;
		if (check(n, mid)) r =  mid - 1;
		else l = mid + 1;
	}
	cout << l << endl;


	return 0;
}
