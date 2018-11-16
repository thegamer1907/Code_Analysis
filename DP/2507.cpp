#include <bits/stdc++.h>
using namespace std;
main () {
	int last = 1000000000 + 8;
	int n, ans = 0, cnt = 0; cin >> n;
	while(n --) {
		int in; cin >> in;
		if(in <= last) cnt = 0;
		cnt ++;
		ans = max(ans, cnt);
		last = in;
	}
	cout << ans;
}