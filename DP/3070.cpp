
#include <bits/stdc++.h>
using namespace std;


#define ll long long
ll n, s[4000], c[4000], c1[4000], m;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}
	for (int i = 0; i < n; i++) {
		c1[i] = 2e9;
	}
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (s[j] < s[i]) {
				c1[i] = min(c1[i], c[i] + c[j]);
			}
		}
		//cout << i << " " << c1[i] << endl;

	}
	ll m = 2e9;
	for (int i = 2; i < n; i++) {
		for (int j = 1; j < i; j++) {
			if (s[j] < s[i]) {
				m = min(m, c[i] + c1[j]);
				//cout << m << endl;
			}
		}
	}
	cout << (m < 2e9 ? m : -1) << endl;
	return 0;
}