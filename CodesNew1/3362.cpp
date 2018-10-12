#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <math.h>
#include <map>
#include <string>

using namespace std;

vector <int> a;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n;
	cin >> m;
	int mx = 0;
	for (int i = 0; i < n; i++) {
		int q;
		cin >> q;
		a.push_back(q);
		if (mx < q) mx = q;
	}
	int mxx = mx + m;
	sort(a.rbegin(), a.rend());
	for (int i = 0; i < a.size(); i++) {
		if (m <= 0) {
			cout << mx << ' ' << mxx;
			return 0;
		}
		m -= mx - a[i];
		a[i] = mx;
	}
	if (m > 0)
		mx += (m + n - 1) / n;
	cout << mx << ' ' << mxx << endl;
	

	return 0;
}