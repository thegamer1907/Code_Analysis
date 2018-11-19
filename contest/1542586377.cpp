#include <bits/stdc++.h>
using namespace std;

bool check(double x, double l, double r) {
	if (l <= x and x <= r) return true;
	return false;
}
int main() {
	int h, m, s, t1, t2;
	scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
	h %= 12;
	t1 %= 12;
	t2 %= 12;
	double mm = 1.00 * m + 1.00 * s / 60;
	double hh = 1.00 * h + mm / 60;
	hh *= 5.00;
	t1 *= 5;
	t2 *= 5;
	if (t1 > t2) swap(t1, t2);
	int f = 0;
	f = check(mm, t1, t2) + check(hh, t1, t2) + check(s, t1, t2);
	if (!f) {
		puts("YES");
		return 0;
	}
	f = 0;
	f = check(mm, t2, 60) + check(mm, 0, t1) + check(hh, t2, 60) + check(hh, 0, t1) + check(s, t2, 60) + check(s, 0, t1);
	if (!f) puts("YES");
	else puts("NO");
	return 0;
}
