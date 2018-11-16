// Source:
// 	http://codeforces.com/problemset/problem/500/A

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, t;
	cin >> n >> t;

	int a;
	int currentPos = 1;
	for (int i = 1; i < n; i++) {
		cin >> a;
		if (currentPos == t) {
			cout << "YES" << endl;
			return 0;
		}
		if (currentPos > t) {
			cout << "NO" << endl;
			return 0;
		}
		if (currentPos == i) {
			currentPos += a;
		}
	}
	if (currentPos == t) {
		cout << "YES" << endl;
	}

	return 0;
}
