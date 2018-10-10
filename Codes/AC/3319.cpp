// who's it from?
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define f first
#define s second
#define SZ(x) (int)(x).size()
#define ALL(x) (x).begin(), (x).end()

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	int id = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] % n <= i) {
			a[i] += i - (a[i] % n);
		} else {
			a[i] += i - (a[i] % n) + n;
		}
		if (a[i] < a[id]) {
			id = i;
		}
	}
	cout << id + 1 << endl;
	return 0;
}