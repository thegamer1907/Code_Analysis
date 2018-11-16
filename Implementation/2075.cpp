#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int n; cin >> n;

	int x = 0, y = 0, z = 0;
	int x1, y1, z1;

	for (int i = 0; i < n; i++) {
		cin >> x1 >> y1 >> z1;
		x += x1;
		y += y1;
		z += z1;
	}

	if (x == 0 && y == 0 && z == 0) {
		cout << "YES";
	} else {
		cout << "NO";
	}


	return 0;
}