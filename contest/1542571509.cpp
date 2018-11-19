#include <bits/stdc++.h>

using namespace std;

int main() {
	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	int cnt = 0;
	h *= 5;
	h %= 60;
	h += m / 12;
	t1 *= 5;
	t1 %= 60;
	t2 *= 5;
	t2 %= 60;
	if (t2 < t1){
		swap(t1, t2);
	}
	for (int i = t1; i < t2; ++i) {
		if (i == h ) {
			++cnt;
		}
		if (i == m) {
			++ cnt;
		}
		if (i == s) {
			++cnt;
		}
	}
	if (cnt == 0 || cnt == 3) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

	return 0;
	
}
