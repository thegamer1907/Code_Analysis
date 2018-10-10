#include <bits/stdc++.h>
using namespace std;

int n, a, ps[100010], q;

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		ps[i] = ps[i-1]+a;
	}
	cin >> q;
	while (q--) {
		cin >> a;
		int L = 1;
		int R = n;
		int ans = R;
		while (L<=R) {
			int mid = (L+R)/2;
			if (ps[mid] >= a) {
				ans = mid;
				R = mid-1;
			} else {
				L = mid+1;
			}
		}
		cout << ans << "\n";
	}
	return 0;
}
