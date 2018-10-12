#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	vector <int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int p = 0;
	int min, max;
	for (int i = 0; i < n-1; i++) {
		p += a[n - 1] - a[i];
	}
	if (p >= m) { min = a[n-1]; }
	else {
		int o = (m - p) % n;
		if (o == 0) {
			min = a[n - 1] + (m - p) / n;
		}
		else {
			min = a[n - 1] + (m - p) / n+1;
		}
	}
	max = a[n - 1] + m;
	if (n == 1) { min = max; }
	cout << min << ' ' << max;
	return 0;
}
