#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

int main() {
	int n;
	int x, y, z, t;
	x = y = z = 0;
	cin >> n;

	while (n--) {
		cin >> t;
		x += t;
		cin >> t;
		y += t;
		cin >> t;
		z += t;
	}

	!x && !y && !z ? cout << "YES" : cout << "NO";
	return 0;
}