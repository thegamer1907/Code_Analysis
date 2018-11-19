#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;

	if (h == 12) h = 0;

	double a, b, c;
	a = 30 * h + 0.1*m + (s / 600.0);
	b = 6 * m + 0.1*s;
	c = 6 * s;

	double x, y;
	x = 30 * t1;
	y = 30 * t2;

	bool answer = false;
	if (x < y) swap(x, y);
	if ((x >= a && y <= a) && (x >= b && y <= b) && (x >= c && y <= c)) answer = true;
	if (!(x >= a && y <= a) && !(x >= b && y <= b) && !(x >= c&& y <= c)) answer = true;
	if (answer) cout << "YES";
	else cout << "NO";
}