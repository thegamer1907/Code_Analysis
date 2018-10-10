#include <bits/stdc++.h>

using namespace std;

#define sz(a) int(a.size())

int main () {
	int k;
	cin >> k;
	for (int i = 1; i; i++) {
		int x = i, sum = 0;
		while (x > 0) {
			sum += x%10;
			x /= 10;
		}
		if (sum == 10) k--;
		if (!k) {
			cout << i << endl;
			return 0;
		}
	}
}
