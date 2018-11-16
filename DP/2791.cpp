#include <bits/stdc++.h>
using namespace std;

int main () {

	int n;
	cin >> n;

	int freq[10];

	int val = 1;
	int ans = 0;

	for (int i = 0; i < 8; ++i) {
		freq[i] = n % 10;
		n /= 10;
		
		ans = max (ans, freq[i]);
	}

	cout << ans << endl;
	for (int i = 0; i < ans; ++i) {
		bool flag = false;
		for (int j = 8; j >= 0; --j) {
			if (freq[j] > i) {
				cout << 1;
				flag = true;
			}
			else if (flag) cout << 0;
		}

		cout << " ";
	}

	cout << endl;


	return 0;
}