#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#include <algorithm>
using namespace std;

int main() {
	int n, s;
	cin >> n >> s;
	vector <int> q(n);
	for (int i = 0; i < n; ++i)
		cin >> q[i];
	int l = 0, r = n + 1, s1 = 0, m, min1 = 0;
	vector <int> w(n);
	while (r - l > 1) {
		m = l + (r - l) / 2;
		s1 = 0;
		w = q;
		for (int i = 0; i < n; ++i)
			w[i] += (i + 1) * m;
		sort(w.begin(), w.end());
		bool t = true;
		for (int i = 0; i < m; ++i) {
			s1 += w[i];
			if (s1 > s) {
				t = false;
				break;
			}
		}
		if (t) {
			l = m;
			min1 = s1;
		}
		else
			r = m;
	}
	cout << l << ' ' << min1 << endl;
	//system("pause");
	return 0;
}