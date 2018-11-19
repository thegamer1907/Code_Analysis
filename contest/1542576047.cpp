#include <iostream>
#include <vector>
#include <iterator>
#include <queue>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	string m, s;
	bool fl = false;
	int n, k1 = 0, k2 = 0;
	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s == m) {
			k1++;
			k2++;
		}
		if (s[0] == m[1]) k1++;
		if (s[1] == m[0]) k2++;
	}
	if ((k1) && (k2)) cout << "YES";
	else cout << "NO";
}