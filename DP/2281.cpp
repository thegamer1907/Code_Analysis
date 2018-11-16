#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

const int N = 1e5 + 5;

int p[N], has[N], a[N];

int main() {
    ios::sync_with_stdio(0);

	int n, m; cin >> n >> m;

	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}

	p[n] = 1;
	has[a[n]] = 1;

	for (int i = n - 1; i >= 0; --i) {
		p[i] = p[i + 1] + (has[a[i]] == 0);
		has[a[i]]++;
	}

	for (int i = 0; i < m; ++i) {
		int l; cin >> l;

		cout << p[l] << endl;
	}

    return 0;
}
