#include <bits/stdc++.h>
using namespace std;

double a, b, c, d, e;
int h, m, s, t1, t2;

int main()
{
	cin >> h >> m >> s >> t1 >> t2;

	h %= 12; t1 %= 12; t2 %= 12;

	a = h * 30. + m * 0.5 + s * 0.5 / 60.;
	b = m * 6. + s * 0.1;
	c = s * 6.;
	d = t1 * 30.;
	e = t2 * 30.;

	if (d>e) swap(d, e);
	int now = 0;
	if (d < a and a < e) now++;
	if (d < b and b < e) now++;
	if (d < c and c < e) now++;

	if (now%3 == 0) puts("YES");
	else puts("NO");
}
