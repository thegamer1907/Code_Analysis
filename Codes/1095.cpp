#include <bits/stdc++.h>
using namespace std;
const int N = 100 * 1001;
typedef pair<long long, long long> pii;
long long n, d, ans, ps[N];
pii a[N];
int main() {
	cin >> n >> d;
	for (int i = 0; i < n; i++)
		cin >> a[i].first >> a[i].second;
	sort(a, a + n);
	ps[0] = a[0].second;
	for (int i = 1; i < n; i++)
		ps[i] = ps[i - 1] + a[i].second;
	for (int i = 0; i < n; i++) {
		int dex = lower_bound(a, a + n, make_pair(a[i].first + d, 0ll)) - a - 1;
		ans = max(ans, ps[dex] - ps[i] + a[i].second);
	}
	cout << ans;
	return 0;
}
