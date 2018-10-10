#include <bits/stdc++.h>
using namespace std;
int n, m;
int k;
vector<int> ans;
void dfs(int sum, int now, int len) {
	if (len > 10 || sum > 10) return;
	if (sum == 10 && len == 10) {
		ans.push_back(now);
		if ((int) ans.size() == k) {
			cout << ans.back() << '\n';
			exit(0);
		}
	}
	else {
		for (int t = 0; t < 10; t++) {
			dfs(sum + t, now * 10 + t, len + 1);
		}
	}
}

int main () {
	scanf("%d", &k);
	dfs(0, 0, 0);
	return 0;
}
