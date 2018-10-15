#include <bits/stdc++.h>
using namespace std;
const int N = 128;
int n, m;
int a[N];
int main() {
	scanf("%d%d", &n, &m);
	int mx = 0, sum = 0;
	for (int i = 0; i < n; ++ i) {
		scanf("%d", &a[i]);
		mx = max(mx, a[i]);
		sum += a[i];
	} 
	int ans1 = mx, ans2 = mx + m;
	m -= mx * n - sum;
	if (m > 0) ans1 += (m + n - 1) / n;
	printf("%d %d\n", ans1, ans2);
	return 0;
}