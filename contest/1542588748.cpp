#include <bits/stdc++.h>
#ifdef TOPOLOGY
#define debug(...) fprintf(stderr, __VA_ARGS__)
#else
#define debug(...)
#endif
using namespace std;

int main() {
	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	m /= 5; s /= 5;
	if (h == 12) h = 0;
	if (t2 == 12) t2 = 0;
	if (t1 == 12) t1 = 0;
	debug("%d %d\n", t1, t2);
	debug("%d %d %d\n", h, m, s);
	if (t1 > t2) swap(t1, t2);
	bool f = true;
	for (int i = t1; i < t2; i++) {
		if (h == i || m == i || s == i) {
			f = false;
			break;
		}
	}
	if (f) {
		puts("Yes");
		return 0;
	}
	f = true;
	for (int i = t2; i < 12; i++) {
		if (h == i || m == i || s == i) {
			f = false;
			break;
		}
	}
	for (int i = 0; i < t1; i++) {
		if (h == i || m == i || s == i) {
			f = false;
			break;
		}
	}
	if (f) puts("Yes");
	else puts("No");
	return 0;
}