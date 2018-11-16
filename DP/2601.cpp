#include <bits/stdc++.h>

using namespace std;

const int maxn = 2e5;

int N, ans, curr, v[maxn];

int main() {
	cin >> N;
	for(int i = 0; i < N; i++) {
		cin >> v[i]; curr++;
		if(i) {
			if(v[i-1] >= v[i]) curr = 1;
		}
		ans = max(ans, curr);
	}
	cout << ans << '\n';
	return 0;
}
