#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <queue>
using namespace std;

inline void boostIO() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

int n, i;
bool f, e, found;
string s, t;

int main() {
	boostIO();
	cin >> s >> n;
	for (i = 0; i < n; ++i) {
		cin >> t;

		if (t[0] == s[1])
			e = 1;
		if (t.back() == s[0])
			f = 1;

		if (t.find(s) != -1)
			found = 1;
	}

	cout << (f && e || found ? "YES" : "NO") << endl;
	return 0;
}