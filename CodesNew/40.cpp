#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>

using namespace std;

int n, m;
double mx = 0, e, r;
int l[1000];

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> l[i];
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (l[i] > l[j]) {
				int t = l[i];
				l[i] = l[j];
				l[j] = t;
			}
		}
	}
	e = max(l[0], m - l[n - 1]);
	for (int i = n - 1; i >= 0; i--) {
		if (abs(l[i] - l[i - 1]) > mx) {
			mx = abs(l[i] - l[i - 1]);
		}
	}
	r = max(e, mx / 2);

	cout << fixed << showpoint << setprecision(9) << r;
	return 0;
}