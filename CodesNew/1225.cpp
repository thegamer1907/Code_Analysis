#include "bits/stdc++.h"

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	long long n;
	cin >> n;
	long long round = 0x3FFFFFFFFFFFF;
	long long queue = 0x3FFFFFFFFFFFF;
	for (long long i = 0; i < n; i++) {
		long long y;
		cin >> y;
		y = max(0ll, y - i);
		long long roundY = (y + n - 1) / n;
		if (roundY < round || (roundY == round && i < queue)) {
			round = roundY;
			queue = i;
		}
	}
	cout << (queue + 1) << endl;
}
