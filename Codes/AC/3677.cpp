#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <assert.h>
#include <map>
#include <set>
#include <queue>
using namespace std;
#define ll long long
#define fori(n) for (ll i=0;i<n;i++)
#define forj(n) for (ll j=0;j<n;j++)
#define pb1 push_back
#define mp make_pair
#define sort(v) sort(v.begin(),v.end())
const ll INF = 1000000000000000000;
const ll P = 1000000007;
string s;
ll sa, sb, sc;
ll pa, pb, pc;
ll na, nb, nc;
ll r0;
bool f(ll k) {
	ll cost_a = max(0LL, k*sa - na)*pa;
	ll cost_b = max(0LL, k*sb - nb)*pb;
	ll cost_c = max(0LL, k*sc - nc)*pc;
	return(r0 - cost_a >= cost_b + cost_c);
}
int main() {
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	cin >> s;
	cin >> na >> nb >> nc;
	fori(s.size()) {
		if (s[i] == 'B')
			sa++;
		if (s[i] == 'S')
			sb++;
		if (s[i] == 'C')
			sc++;
	}
	cin >> pa >> pb >> pc;
	cin >> r0;
	ll l = 0;
	ll r = 10000000000000;
	while (r - l > 1) {
		ll m = (l + r) / 2;
		if (f(m))
			l = m;
		else
			r = m;
	}
	if (f(r))
		cout << r;
	else
		cout << l;
	return 0;
}