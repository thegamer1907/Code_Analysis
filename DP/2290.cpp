#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e5+5;
int dp[N], a[N];
set<int> present;

int main() {
	int n, m;
	present.clear();
	
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	
	dp[n+1] = 0;
	for (int i = n; i > 0; i--) {
		if (present.find(a[i]) == present.end()) {
			dp[i] = dp[i+1] + 1;
			present.insert(a[i]);
		}
		else dp[i] = dp[i+1];
	}
	
	while (m--) {
		int l;
		scanf("%d", &l);
		printf("%d\n", dp[l]);
	}
	
	return 0;	
}
