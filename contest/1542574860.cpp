#include <iostream>
#include <vector>
#include <iterator>
#include <queue>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	double s, m, h, t1, t2, a[5];
	bool fl = false;
	cin >> h >> m >> s >> t1 >> t2;
	h += m / 60 + s / 3600;
	m = m / 5 + s / 3600;
	s /= 5;
	a[0] = h; a[1] = m; a[2] = s; a[3] = t1; a[4] = t2;
	sort(a, a + 5);
	for (int i = 0; i < 4; i++)
		if (((a[i] == t1) && (a[i + 1] == t2)) ||
			((a[i] == t2) && (a[i + 1] == t1))|| 
			((a[0] == t1) && (a[4] == t2)) || 
			((a[0] == t2) && (a[4] == t1)))
			fl = true;
	if (fl) cout << "YES";
	else cout << "NO";
}