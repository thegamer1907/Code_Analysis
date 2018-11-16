#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//	freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
	int a, b, n;
	cin >> n >> a >> b;
	if (a > b) {
		swap(a, b);
	}
	int mid = n / 2;
	if (a <= mid && mid < b) {
		cout << "Final!";
		return 0;
	}
	vector<int> cur;
	for (int i = 1; i <= n; ++i) {
		cur.push_back(i);
	}
	for (int k = 1; k <= 100; ++k) {
		vector<int> kek = cur;
		cur.clear();
//		for (int i = 0; i < kek.size(); ++i) {
//			cout << kek[i] << " ";
//		}
//		cout << endl;
		for (int i = 1; i < kek.size(); i += 2) {
			int fir = kek[i - 1];
			int sec = kek[i];
			if (fir == a && sec == b) {
				cout << k;
				return 0;
			}
			if (fir == a || fir == b) {
				cur.push_back(fir);
			} else {
				cur.push_back(sec);
			}
		}
	}
	return 0;
}
