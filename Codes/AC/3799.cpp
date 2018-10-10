// :) 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int num[3];
int main () {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'B')
			num[0]++;
		if (s[i] == 'S')
			num[1]++;
		if (s[i] == 'C')
			num[2]++;
	}
	int n[3], p[3];
	ll r;
	for (int i = 0; i < 3; i++)
		cin >> n[i];
	for (int i = 0; i < 3; i++)
		cin >> p[i];
	cin >> r;
	ll res = 0;
	while (true) {
		for (int i = 0; i < 3; i++)
			if (num[i] <= n[i])
				n[i] -= num[i];
			else {
				int cost = (num[i]-n[i]) * p[i];
				n[i] = 0;
				if (cost <= r)
					r -= cost;
				else {
					cout << res << "\n";
					return 0;
				}
			}
		res++;
		bool ok = true;
		for (int i = 0; i < 3; i++)
			if (n[i] != 0 && num[i] != 0)
				ok = false;
		if (ok)	
			break;
	}
	ll left, right, mid, out = 0;
	left = 0;
	right = 1e12;
	while (left <= right) {
		mid = (left+ right) / 2;
		ll cp = r;
		for (int i = 0; i < 3; i++)
			cp -= 1LL * p[i] * num[i] * mid;
		if (cp >= 0) {
			out = max(out, mid);
			left = mid+1;
			continue;
		} else 
			right = mid-1;
	}
	cout << res + out << "\n";
}
