#include <iostream>
#include <cstdio>
#include <map>
#include <cstring>
#include <vector>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	map <pair<int, int>, long long> record;
	map <int, int> cnt;
	long long ans = 0;
	for (int i = 1; i <= n; i ++) {
		int t; cin >> t;
		if (t % (k*k) == 0) 
			ans = ans + record[make_pair(t/(k*k), t/k)];
		if (t % k == 0) 
			record[make_pair(t/k, t)] += cnt[t/k];
		cnt[t] ++;
	}
	cout << ans << endl;
	return 0;
}