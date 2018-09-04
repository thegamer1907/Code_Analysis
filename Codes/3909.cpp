#include <bits/stdc++.h>

#define int long long 

using namespace std;

 main () {
	string t;
	cin >> t;   
	int b = 0, s = 0, c = 0;
	for (int i = 0;i < t.size ();i ++) {
		if (t[i] == 'B') b ++;
		if (t[i] == 'S') s ++;
		if (t[i] == 'C') c ++;
	}
	int B, S, C;
	cin >> B >> S >> C;
	int b1, s1, c1;
	cin >> b1 >> s1 >> c1;
	int R;
	cin >> R;
	int l = 1;
	int r = 2e12;
	int ans = 0;
	while (l <= r) {
		int mid = (l + r) / 2;
		int needb = max ((b * mid) - B, 0ll) * b1;
		int needs = max ((s * mid) - S, 0ll) * s1;
		int needc = max ((c * mid) - C, 0ll) * c1;
		if (needb + needs + needc <= R) {
			ans = mid;
			l = mid + 1;
		}
		else r = mid - 1;
	}
	cout << ans;

	return 0;
}