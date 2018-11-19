#include <iostream>

using namespace std;

int h, m, s, t1, t2;

int main() {
	cin >> h >> m >> s >> t1 >> t2;
	t1 *= 5;
	t2 *= 5;
	h *= 5;
	t1 %= 60;
	t2 %= 60;
	h %= 60;
	if (t1 > t2)
		swap (t1, t2);
	if (h >= t1 && m >= t1 && s >= t1 && h < t2 && m < t2 && s <= t2)
		return cout << "YES" << "\n", 0;
	else if ((h >= t2 || h < t1) && (m >= t2 || m < t1) && (s >= t2 || s < t1))
		return cout << "YES" << "\n", 0;
	cout << "NO" << "\n";
	return 0;
}