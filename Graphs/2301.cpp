#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
using namespace std;
#define ll long long
#define fori(n) for (ll i=0;i<n;i++)
#define forj(n) for (ll j=0;j<n;j++)
#define pb push_back
#define mp make_pair
#define sort(v) sort(v.begin(),v.end())
const ll INF = 1000000000000000000;
const ll P = 1000000007;
vector<ll> p;
ll n;
int main() {
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	cin >> n;
	p.pb(-1);
	fori(n) {
		ll pi;
		scanf("%lld", &pi);
		p.pb(pi);
	}
	ll max_len = 0;
	for (ll ii = 1; ii<= n; ii++) {
		ll len = 0;
		ll i = ii;
		while (i != -1) {
			len++;
			i = p[i];
		}
		max_len = max(len, max_len);
	}
	cout << max_len;
	return 0;
}