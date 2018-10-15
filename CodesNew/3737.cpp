#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, m, k;
	cin >> n >> m;
	vector <int> v(n);
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
		sum = sum + v[i];
	}
	int min, max;
	sort(v.begin(), v.end());
	max = v[n - 1] + m;
	if (sum + m <= v[n - 1] * n) {
		min = v[n - 1];
	} else {
		m = m - (n * v[n - 1] - sum);
		if (m % n == 0) {
			min = v[n - 1] + (m / n);
		} else {
			min = v[n - 1] + (m / n) + 1;
		}
	}
	cout << min << " " << max;
	return 0;
}
