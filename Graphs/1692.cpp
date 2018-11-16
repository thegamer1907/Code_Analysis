#include <iostream>
using namespace std;

int main() {
	int n, t, city[30000] = { 0 }, cur = 0;
	cin >> n >> t;
	for (int i = 0; i < n - 1; i++) {
		cin >> city[i];
	}
	for (int i = 0; i < n; i+=city[i]) {
		if (cur == t - 1) {
			cout << "YES" << endl;
			return 0;
		}
		if (i > n - 2)break;
		cur += city[i];
	}
	cout << "NO" << endl;
	return 0;
}