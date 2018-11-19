#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	h %= 12;
	m = (m / 5) % 12;
	s = (s / 5) % 12;
	t1 %= 12;
	t2 %= 12;
	while (t1 != t2) {
		if (t1 == h || t1 == m || t1 == s)
			break;
		t1 = (12 + t1 + 1) % 12;
	}
	if (t1 != t2) {
		t1 = (12 + t1 - 1) % 12;
		if (t1 == h || t1 == m || t1 == s) {
			cout << "NO\n";
			return 0;
		}
		while (t1 != t2) {
			t1 = (12 + t1 - 1) % 12;
			if (t1 == h || t1 == m || t1 == s) {
				cout << "NO\n";
				return 0;
			}
		}
		cout << "YES\n";
	} else
		cout << "YES\n";
	return 0;
}
