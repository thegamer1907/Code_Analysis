#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

int main() {
    ios::sync_with_stdio(0);

	int n; cin >> n;

	int a[n];

	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	int now = 1, bst = 1;

	for (int i = 1; i < n; ++i) {
		if (a[i] > a[i - 1]) {
			++now;
			bst = max(bst, now);
		} else {
			now = 1;
		}
	}

	cout << bst << endl;

    return 0;
}
