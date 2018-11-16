#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	const int M_S = 100000;
	string s;
	int n, m, l, r;
	vector<int> a;

	cin >> s;

	n = s.length();
	a.push_back(0);

	for (int i = 1; i < n; i++) {
		if (s[i - 1] == s[i]) {
			a.push_back(a[i - 1] + 1);
		}
		else {
			a.push_back(a[i - 1]);
		}
	}

	cin >> m;

	for (int i = 0; i < m; i++) {
		cin >> l >> r;
		
		cout << a[r - 1] - a[l - 1] << endl;
	}

	return 0;
}