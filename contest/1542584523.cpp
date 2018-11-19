#include <bits/stdc++.h>
using namespace std;



int main(void) {
	int h, m, s, t1, t2;
	scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
	int x = m * 60 + s, y = s;
	h = (h % 12) * 3600;
	m = m * 720;
	s = s * 720;
	m +=  y * 12;
	h += x;
	t1 = (t1 % 12) * 3600;
	t2 = (t2 % 12) * 3600;
	for (int i = 0; i < 43200; i++) {
		int tmp = (t1 + i) % 43200;
		if (tmp == t2) {
			puts("YES");
			return 0;
		}
		if (tmp == h || tmp == m || tmp == s) {
			break;
		}
		
	}
	
	for (int i = 0; i < 43200; i++) {
		int tmp = (t2 + i) % 43200;
		if (tmp == t1) {
			puts("YES");
			break;
		}
		if (tmp == h || tmp == m || tmp == s) {
			puts("NO");
			break;
		}
	}
	return 0;
}