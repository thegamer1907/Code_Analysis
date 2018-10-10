#include <bits/stdc++.h>
using namespace std;
#define MAXN 100010
int a[MAXN],n;
int main() {
	ios::sync_with_stdio(false);
	int m = INT_MAX;
	cin >> n;
	for (int i=1; i<=n; i++) {
		cin >> a[i];
		m = min(m, a[i]/n);
	}
	for (int i=1; i<=n; i++) {
		a[i] = a[i] - m*n;
	}
	bool got_entry = false;
	int gate = 1, step = 0;
	while (!got_entry) {
		if (a[gate] - step <= 0) {
			got_entry = true;
		}
		else {
			step++;
			gate++;
			if (gate > n) {
				gate = 1;
			}
		}
	}
	cout << gate << endl;
	return 0;
}