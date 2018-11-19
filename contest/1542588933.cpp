#include <bits/stdc++.h>

const int lim = 12 * 60 * 60;

int h, m, s, t1, t2;

bool hari[12 * 60 * 60];

int main() {
	scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
	h %= 12, t1 %= 12, t2 %= 12;
	
	h = h * 60 * 60 + m * 60 + s;
	m = 12 * (m * 60 + s);
	s = 12 * 60 * s;
	t1 *= 60 * 60;
	t2 *= 60 * 60;
	
	hari[h] = hari[m] = hari[s] = 1;
	
	for (int i = t1; ; ++i) {
		if (i >= lim) i -= lim;
		if (hari[i]) break;
		if (i == t2) {
			puts("YES");
			return 0;
		}
	}
	
	for (int i = t1; ; --i) {
		if (i < 0) i += lim;
		if (hari[i]) break;
		if (i == t2) {
			puts("YES");
			return 0;
		}
	}
	
	puts("NO");
	
	return 0;
}