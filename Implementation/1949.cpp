#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <numeric>
#include <cctype>
using namespace std;

int main() {
	int n;
	cin >> n;
	int x, y, z;
	int cx = 0, cy = 0, cz = 0;
	for (int i = 0; i < n; ++i) {
		cin >> x >> y >> z;
		cx += x;
		cy += y;
		cz += z;
	}
	cout << ((cx != 0 || cy != 0 || cz != 0) ? "NO" : "YES") << endl;
}