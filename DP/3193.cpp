/* In the name of Allah */
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0);

	int n;
	cin >> n;
	int ans = 0;
	for (int i = 0, cnt = 0, last = 1e9; i < n; i++) {
		int x;
		cin >> x;
		x <= 2 * last? ans = max(ans, ++cnt): cnt = 1, last = x;
	}
	cout << ans << endl;

	return 0;
}
