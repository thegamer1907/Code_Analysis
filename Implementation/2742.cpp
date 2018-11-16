#include <bits/stdc++.h>
using namespace std;

int n, t, a[30004];

int main() {
	cin >> n >> t;
	for (int i=1; i<n; i++) cin >> a[i];

	int k = 1;
	while (k < t) k += a[k];

	if (k == t) cout << "YES";
	else cout << "NO";
}
