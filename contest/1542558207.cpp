#include <algorithm>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	h %= 12;
	t1 %= 12;
	t2 %= 12;
	h = h * 60 * 60 + m * 60 + s;
	m = m * 12 * 60 + s * 12;
	s *= 12 * 60;
	t1 = t1 * 60 * 60;
	t2 = t2 * 60 * 60;
	int tmax = max(t1, t2);
	int tmin = min(t1, t2);
	if ((h > tmax || h < tmin) &&
		(m > tmax || m < tmin) &&
		(s > tmax || s < tmin)) {
		cout << "YES";
	}
	else if ((h < tmax && h > tmin) &&
		(m < tmax && m > tmin) &&
		(s < tmax && s > tmin)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}