#include <bits/stdc++.h>

using namespace std;

bool yes[120];

int main() {
	int h, m, s, t1, t2;
	scanf("%d %d %d %d %d", &h, &m, &s, &t1, &t2);
	h = (h * 5) % 60;
	t1 = (t1 * 5) % 60;
	t2 = (t2 * 5) % 60;
	yes[h] = 1;
	yes[m] = 1;
	yes[s] = 1;
	int i = t1;
	while (1) {
		if (i == t2) {
			return 0 * puts("YES");
		}
		if (yes[i]) {
			break;
		}
		(++i) %= 60;
	}
	i = t1;
	while (1) {
		if (i == t2) {
			return 0 * puts("YES");
		}
		i += 59;
		i %= 60;
		if (yes[i]) {
			break;
		}
	}
	puts("NO");
	return 0;
}