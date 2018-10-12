#include <cstdio>
#include <string>
#include <map>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int a[200];

int main() {
	scanf("%d%d", &n, &m);
	int mx = 0;
	int mn = 100000;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		mx = max(mx, a[i]);
		mn = min(mn, a[i]);
		sum = sum + a[i];
	}
	for (int ans1 = mx; ; ans1++) {
		if (ans1 * n - sum >= m) {
			printf("%d %d\n", ans1, mx + m);
			return 0;
		}
	}
	
	return 0;
}