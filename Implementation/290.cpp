#include <bits/stdc++.h>

using namespace std;

int s[10000];

int main() {
	int n, a, b;
	cin >> n >> a >> b;
	s[a - 1] = a;
	s[b - 1] = b;
	int c = 1;
	for (int j = 1; j < n / 2; j <<= 1, c++) {
		for (int i = 0; i < (n / j); i += 2) {
			if (s[i] == a && s[i + 1] == b) {
				cout << c;
				return 0;
			}
			if (s[i] == b && s[i + 1] == a) {
				cout << c;
				return 0;
			}
			s[i / 2] = max(s[i], s[i + 1]);
		}
	}
	cout << "Final!\n";
}	