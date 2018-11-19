#include <iostream>

using namespace std;

int a[16] = {};

int main() {
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int val = 0;
		for (int j = 0; j < k; j++) {
			int t;
			cin >> t;
			if (t)
				val += (1 << j);
		}
		a[val]++;
		//cout << val << endl;
	}
	for (int i = 0; i < 16; i++) {
		for (int j = 0; j < 16; j++) {
			//cout << i << " " << j << " " << a[i] << " " << a[j] << endl;
			if (a[i] > 0 && a[j] > 0) {
				if ((i&j) == 0) {
					cout << "YES" << endl;
					return 0;
				}

			}

		}

	}
	cout << "NO" << endl;
	return 0;
}