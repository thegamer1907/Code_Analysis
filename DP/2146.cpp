#include <bits/stdc++.h>
using namespace std;

const int NM = 1e5 + 10;

int ans[NM], v[NM];
bool suf[NM];

int main() {


	int n, m, k;

	cin >> n >> m;

	for(int i = 0; i < n; ++i)  cin >> v[i];
	for(int i = n-1; i >= 0; --i) {
		if(!suf[v[i]]) suf[v[i]] = true, ans[i] += ans[i+1] + 1;
		else ans[i] += ans[i+1];
	}

	for(int i = 0; i < m; ++i) cin >> k, cout << ans[k-1] << '\n';

	return 0;
}