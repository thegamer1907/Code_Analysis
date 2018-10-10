#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <queue>
#include <math.h>
#include <iomanip>
#include <functional>
#include <list>
#include <cstdio>
#include <fstream>
#include <stdio.h>
#include <sstream>
#include <bitset>

using namespace std;

#define pi 3.14159265358979323846
#define pb push_back
#define mp make_pair
#define endl "\n"
#define pll pair<ll, ll>
#define rep(i,n) for(int i = 0; i < n; ++i)

typedef unsigned long long ull;
typedef long long ll;

ll gcd(ll a, ll b) {
	while (b) {
		a %= b;
		swap(a, b);
	}
	return a;
}

ll lcm(ll a, ll b) {
	return a / gcd(a, b) * b;
}

bool isprime(ll p) {

	if (p < 2) return false;
	if (p == 2) return true;
	if (p % 2 == 0) return false;

	double limit = sqrt(p);

	for (ll i = 3; i <= limit; i += 2) {
		if ((p % i) == 0) return false;
	}

	return true;
}

ll fac(ll n) {
	ll an = 1;
	while (n > 1)
	{
		an *= n;
		n--;
	}
	return an;
}

ll kor(ll n, ll st) {
	int res = 1;
	while (st) {
		if (st & 1)
			res *= n;
		n *= n;
		st >>= 1;
	}
	return res;
}

#define NMAX 10000000007
#define N 100001
map<string, pair<bool, bool> >w;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie();
	int n, m;
	cin >> n >> m;
	rep(i, n)
	{
		string a;
		cin >> a;
		w[a].first = true;
	}
	rep(i, m)
	{
		string a;
		cin >> a;
		w[a].second = true;
	}
	int c1 = 0, c2 = 0, same = 0;
	for (map<string, pair<bool, bool> >::iterator ii = w.begin(); ii != w.end(); ++ii)
	{
		if(ii->second.second && ii->second.first)
		{
			same++;
			continue;
		}
		if (ii->second.first)
		{
			c1++;
		}
		else if(ii->second.second) c2++;
	}
	if (c1 >= c2)
	{
		if (c1 > c2 || (c1 == c2 && same % 2 == 1))
			cout << "YES";
		else cout << "NO";
	}
	else cout << "NO";
	return 0;
}