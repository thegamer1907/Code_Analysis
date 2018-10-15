#include <bits/stdc++.h>

using namespace std;

const int maxn = 110;
int a[maxn];

int main () {
	int n, m, mm, mx, ans;
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> a[i];
	mm = m;
	mx = *max_element (a, a + n);
	for (int i = 0; i < n; i++) mm -= (mx - a[i]);
	if (mm > 0) {
		ans = mx + (mm / n);
		if (mm % n) ans++;
	}
	else ans = mx;
	cout << ans << '\n' << mx + m << '\n';
	return 0;
}
