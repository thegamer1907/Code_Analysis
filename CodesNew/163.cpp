#include  <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n, k, x;

int main() {
	cin >> n >> k;
	while (n > 0) {
		x = (1ll << (n - 1));
		if (x == k) {
			cout << n << endl;
			return 0;
		} else if (x < k) {
			k -= x;
		}
		n--;

	}
	cout << 1 << endl;
	return 0;
}