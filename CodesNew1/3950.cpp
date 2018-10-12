#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#define ll long long

using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt");



int bin(int l, int r, vector <ll> &a, ll x) {
	int t = 0;
	while (r - l > 1) {
		t = (r + l) / 2;
		if (a[t] <= x) l = t;
		else r = t;
	}
	return r;
}

int main() {
	ll n, q;
	cin >> n >> q;
	vector <ll> a(n);
	cin >> a[0];
	for (int i = 1; i < n; i++) {
		ll t;
		cin >> t;
		a[i] = a[i - 1] + t;
	}
	vector <ll> k(q);
	for (int i = 0; i < q; i++) {
		cin >> k[i];
	}

	ll now = 0;
	for (int i = 0; i < q; i++) {
		now += k[i];
		int t = bin(-1, (int)a.size(), a, now);
		int ans = a.size() - t;
		if (ans == 0) {
			ans = (int)a.size();
			now = 0;
		}
		cout << ans << '\n';
	}


}