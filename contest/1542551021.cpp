#include <stdio.h>
#include <algorithm>

int main(void) {
	int h, m, s, t1, t2;
	scanf("%d %d %d %d %d", &h, &m, &s, &t1, &t2);
	double dt1 = static_cast<double>(t1 * 30 % 360);
	double dt2 = static_cast<double>(t2 * 30 % 360);
	double  ds = static_cast<double>(s * 6);
	double  dm = static_cast<double>(m * 6) +  6.0 * ds / 360.0;
	double  dh = static_cast<double>(h * 30 % 360) + 30.0 * dm / 360.0;
	double *aa[5] = { &dt1, &dt2, &ds, &dm, &dh };
	std::sort(aa, aa + 5, [] (double *a, double *b) { return *a < *b; });
	int x = 0;
	int y = 0;
	for (int i = 0; i < 5; ++i) {
		if (aa[i] == &dt1)
			x = i;
		if (aa[i] == &dt2)
			y = i;
	}
	printf((((x + 1) % 5 == y) or ((y + 1) % 5 == x)) ? "YES\n" : "NO\n");
	return 0;
}
