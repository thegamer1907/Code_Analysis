#include <bits/stdc++.h>

using namespace std;

const int N = 203;

string s[N];
int n, ans[N];

int Get() {
	int k;
	for (k = 9; k >= 1; --k) {
		bool f = true;
		for (int i = 0; i < (1 << k); ++i) {
			string v = "";
		 	for (int j = k - 1; j >= 0; --j) {
				v += (char) ((int) (i >> j & 1) + '0'); 		 	
		 	}
		 	if ((int) s[n].find(v) == -1) {
		 		f = false;
		 		break;
		 	}
		}
		if (f) return k;
	}
	return k;					
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL);
	cin >> n; for (int i = 1; i <= n; ++i) cin >> s[i];
	int m; cin >> m;
	while (m--) {
		int a, b; cin >> a >> b;
		s[++n] = s[a] + s[b];
		int len = (int) s[n].size();
		if (len > 1000) {
		 	 	s[n] = s[n].substr(0, 500) + s[n].substr(len - 500, 500);
		}
		ans[n] = max(Get(), max(ans[a], ans[b]));
		cout << ans[n] << '\n';
	}	
	return 0;
}