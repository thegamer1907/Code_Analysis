#include <bits/stdc++.h>

using namespace std;

int main () {
	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;	
	int ok1 = 0, ok2 = 0;
	if (h == 12) h = 0;
	h *= 5;
	if (t1 == 12) t1 = 0;
	if (t2 == 12) t2 = 0;
	t1 *= 5;
	t2 *= 5;
	if (t2 > t1) swap (t2, t1);
	if (h > t1 && h < t2 + 60) ok1 = 1;
	h += 60;
	if (h > t1 && h < t2 + 60) ok1 = 1;
	h -= 60;
	if (h < t1 && h > t2) ok2 = 1;
	if (m > t1 && m < t2 + 60) ok1 = 1;
	m += 60;
	if (m > t1 && m < t2 + 60) ok1 = 1;
	m -= 60;
	if (m < t1 && m > t2) ok2 = 1;
	if (s > t1 && s < t2 + 60) ok1 = 1;
	s += 60;
	if (s > t1 && s < t2 + 60) ok1 = 1;
	s -= 60;
	if (s < t1 && s > t2) ok2 = 1;
//	cout << ok1 << ' ' << ok2 << endl;
	if (t1 == h && (m || s)) {
		ok1 = 1;
	}
	if (t1 == m && s) {
		ok1 = 1;
	}
	if (t2 == h && (m || s)) {
		ok2 = 1;
	}
	if (t2 == m && s) {
		ok2 = 1;
	}
	//cout << h << ' ' << m << ' ' << s << ' ' << t1 << ' ' << t2 << endl;
	//cout << ok1 << ' ' << ok2 << endl;
	if (ok1 && ok2) {
		cout << "NO";
	}
	else cout << "YES";
	return 0;
}