#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5 + 10;

int N, M, v[maxn], memo[maxn];
unordered_set<int> keep;

int main() {
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> N >> M;
	for(int i = 1; i <= N; i++) {
		cin >> v[i];
	}
	for(int i = N; i; i--) {
		memo[i] += memo[i+1] + !keep.count(v[i]);
		keep.insert(v[i]);
	}
	while(M--) {
		int val; cin >> val;
		cout << memo[val] << endl;
	}
	return 0;
}