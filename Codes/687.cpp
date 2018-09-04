#include <bits/stdc++.h>

using namespace std;

#define forn(i, n) for(int i = 0; i < n; ++i)

int main() {
	int n = 0;
	int i = 0;
	int k;
	cin >> k;
	while (1) {
		++i;
		int c = 0;
		int j = i;
		while(j && c <= 10) {
			c += j % 10;
			j /= 10;
		}
		if (c == 10) {
			++n;
			if (n == k) {
				cout << i;
				return 0;
			}
		}
	}
	return 0;
}