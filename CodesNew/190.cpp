#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, t;
	vector<int> a;
	cin >> n >> t;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		a.push_back(x);
	}

	int l = 0, time = 0, res = 0;
	for (int r = 0; r < n; r++) {
		time += a[r];
		while (time > t) {
			time -= a[l];
			l++;
		}
		res = max(res, r - l + 1);
	}
	
	cout << res;
	return 0;
}