#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n; cin >> n;
	vector<long long> a(n);
	for (auto &i : a)
		cin >> i;
	long long ans = 1e15;
	int ind = 0;
	for (int i = 0; i < n; i++) {
		long long l = -1, r = a[i] + 1;
		while (r - l > 1) {
			long long m = (l + r) >> 1;
			if (i + 1 + m * n <= a[i])
				l = m;
			else
				r = m;
		}
		if (i + 1 + r * n < ans) {
			ans = i + 1 + r * n;
			ind = i;
		}
	}
	cout << ind + 1 << endl;
}