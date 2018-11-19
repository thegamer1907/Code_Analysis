#include <bits/stdc++.h>

using namespace std;

int main() {
	string pas;
	cin >> pas;
	int n;
	bool first = 0, second = 0;
	bool ok = 0;
	cin >> n;
	for (int i = 0;i < n; ++i) {
		string w;
		cin >> w;
		if (w[1] == pas[0]) {
			first = 1;
		}
		if (w[0] == pas[1]) {
			second = 1;
		}
		if (w == pas) {
			ok = 1;
		}
	}
	if (first && second) {
		ok = 1;
	}
	if (ok) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

	return 0;
	
}
