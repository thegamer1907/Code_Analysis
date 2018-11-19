#include <stdio.h>
#include <iostream>
#include <cstring>
#include <algorithm>
#define local
using namespace std;
int h, m, s, t1, t2, t[3], now;
bool judge() {
	for (int i = 0; i < 60; ++i) {
		now = t1 + i;
		if (now >= 60) now -= 60;
		if (now == t[0] || now == t[1] || now == t[2]) {
			break;
		}
		if (now == t2)
			return true;
	}
	for (int i = 0; i < 60; ++i) {
		now = t2 + i;
		if (now >= 60) now -= 60;
		if (now == t[0] || now == t[1] || now == t[2]) {
			break;
		}
		if (now == t1)
			return true;
	}
	return false;

}
int main() {
	while (cin >> h >> m >> s >> t1 >> t2) {
		h *= 5, t1 *= 5, t2 *= 5;
		if (s != 0 && !(m % 5))
			++m;
		if ((m != 0 || s != 0) && !(h % 5)) 
			++h;
		if (m >= 60) m -= 60;
		if (h >= 60) h -= 60;
		if (s >= 60) s -= 60;
		if (t1 >= 60) t1 -= 60;
		if (t2 >= 60) t2 -= 60;
		t[0] = h, t[1] = s, t[2] = m;
		sort (t, t+3);
		if (judge()) 
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
	}
	return 0;
}