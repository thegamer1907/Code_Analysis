#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e7;
ll a[N];

int main() {
	ll int n, t = 0, ans = 0;
	cin >> n;
	for (ll int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] == 1)
			t++;
	}
	for (ll int i = 1; i <= n; i++) {
		ll int k = 0;
		for (ll int j = i ; j <= n ; j++) {
			if (a[j] == 0)
				k++;
			else
				k--;
			ans = max(ans, t + k);
		}
	}
	cout << ans;
	return 0;
}
