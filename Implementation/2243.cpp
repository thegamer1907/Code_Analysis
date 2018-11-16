#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(0);
	cin.sync_with_stdio(0);
	
	int k, n, w;
	cin >> k >> n >> w;
	
	long long total = 0;
	for(int i=1; i<=w; i++) {
		total += (1LL*k) * i;
	}
	
	cout << (n >= total ? 0 : total-n) << '\n';
	
	return 0;
	
}