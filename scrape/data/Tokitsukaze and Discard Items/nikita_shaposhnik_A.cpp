#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define int long long
#define all(c) c.begin(), c.end()

signed main() {
	int n, m, k;
	cin >> n >> m >> k;
	vector<int> v(m);
	for (int i = 0; i < m; i++) {
		cin >> v[i];
		v[i]--;
	}
	int cnt = 0, ans = 0;
	int l = (v[cnt] / k) * k;
	int r = l + k;
	while (cnt < m) {
		int now = 0;
		while (cnt + now < m && v[cnt + now] < r) {
			now++;
		}
		//int now = lower_bound(all(v), r) - lower_bound(all(v), l);
		if (now == 0) {
			l = (v[cnt] / k) * k + cnt % k;
			if (l > v[cnt]) {
				l -= k;
			}
			r = l + k;
		}
		else {
			ans++;
			cnt += now;
			l = r;
			r += now;
		}
	}
	cout << ans;
	return 0;
}