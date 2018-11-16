// Source:
// 	http://codeforces.com/problemset/problem/489/B

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int n, m;

	cin >> n;
	vector< int > boys (n);
	for (int i = 0; i < n; i++) {
		cin >> boys[i];
	}
	sort(boys.begin(), boys.end());
	cin >> m;
	vector< int > girls (m);
	for (int i = 0; i < m; i++) {
		cin >> girls[i];
	}
	sort(girls.begin(), girls.end());

	int pairs = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (abs(boys[i] - girls[j]) <= 1) {
				girls[j] = 1000;
				pairs++;
				break;
			}
		}
	}

	cout << pairs << endl;

	return 0;
}
