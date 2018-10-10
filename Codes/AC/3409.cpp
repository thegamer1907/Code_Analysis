#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define eb emplace_back
#define mt make_tuple

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

bool test(ll n, ll k)
{
	ll me = 0, notme = 0;
	while (n)
	{
		me += min(k, n);
		n -= min(k, n);
		notme += n/10;
		n -= n/10;
	}
	return me >= notme; 
}

int main()
{
	ll lo = 1, hi = 1e18 + 3;
	ll n;
	cin >> n;
	while (lo < hi)
	{
		ll mid = (lo+hi)/2;
		if (test(n, mid))
			hi = mid;
		else
			lo = mid+1;
	}
	cout << lo << endl;
	return 0;
}


