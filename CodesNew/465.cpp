	#include <iostream>
	#include <algorithm>
	#include <cmath>
	using namespace std;

	#define ll long long


	int main() {
		ios_base::sync_with_stdio(false);


		int n;
		ll t;
		int a[100000];

		cin >> n >> t;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		int result = 0;
		int l = 0, r = 0;

		while (true) {
			while (true) {
				if (t < a[l]) {
					l--;
					break;
				}
				if (l == n)
					break;
				t -= a[l];
				l++;
			}
			if (l == n) {
				result = max(result, l - r );
				break;
			}
			result = max(result, l - r + 1);
			l++;
			t += a[r++];
		}


		cout << result << endl;

		cin.get();
		cin.get();

		return 0;

	}