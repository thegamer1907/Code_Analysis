#include <iostream>
using namespace std;

float conv(float n) {
	if (n == 12)n = 0;
	else n *= 5;
	return n;
}

bool clockwise(float t1, float t2, float h, float m, float s) {
	if (t2 > t1) {
		if ((t1 < s) && (s < t2))return false;
		if ((t1 < m) && (m < t2))return false;
		if ((t1 < h) && (h < t2))return false;
		return true;
	}
	else {
		if ((s > t1) || (s < t2)) return false;
		if ((m > t1) || (m < t2)) return false;
		if ((h > t1) || (h < t2)) return false;
		return true;
	}
}

int main() {
	float h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;

	h = conv(h);
	if (s > 0) m += 0.5;
	if (m > 0) h += 0.5;
	t1 = conv(t1);
	t2 = conv(t2);
	
	if (((t1 == h) || (t1 == m) || (t1 == s)) || ((t2 == h) || (t2 == m) || (t2 == s))) {
		cout << "NO";
	}
	else {
		if (clockwise(t1, t2, h, m, s) || clockwise(t2, t1, h, m, s)) cout << "YES";
		else cout << "NO";
	}

}