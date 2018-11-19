#include <cstdio>
#include <algorithm>
using namespace std;

int h, m, s, t1, t2, p[3], x, y;

int main() {
	scanf("%d %d %d %d %d", &h, &m, &s, &t1, &t2);
	if (h == 12) h = 0;
	if (t1 == 12) t1 = 0;
	if (t2 == 12) t2 = 0;
	p[0] = 720 * s;
	p[1] = 720 * m + 12 * s;
	p[2] = 3600 * h + 60 * m + s;
	sort(p, p + 3);
	x = t1 * 3600;
	y = t2 * 3600;
	if (p[0] < x&&x < p[1] && p[0] < y&&y < p[1]) {
		puts("YES");
	}
	else if (p[1] < x&&x < p[2] && p[1] < y&&y < p[2]) {
		puts("YES");
	}
	else if ((x<p[0] || x>p[2]) && (y<p[0] || y>p[2])) {
		puts("YES");
	}
	else puts("NO");
	return 0;
}