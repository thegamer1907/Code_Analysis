#include <bits/stdc++.h>

using namespace std;

double h, m, s;
int t1, t2;
bool can1 = true, can2 = true;
int main() {
	
	scanf("%lf%lf%lf%d%d", &h, &m, &s, &t1, &t2);
	h = 5 * h + m / 12 + s / 720;
	m = m + s / 60;
	if (h >= 60) h -= 60;
	if (m >= 60) m -= 60;
	for (int i = t1; i != t2; i = i % 12 + 1) {
		
		int c = i % 12 * 5;
		if (c <= h && h <= c + 5) can1 = false;
		if (c <= m && m <= c + 5) can1 = false;
		if (c <= s && s <= c + 5) can1 = false;
	}
	
	swap(t1, t2);
	for (int i = t1; i != t2; i = i % 12 + 1) {
		
		int c = i % 12 * 5;
		if (c <= h && h <= c + 5) can2 = false;
		if (c <= m && m <= c + 5) can2 = false;
		if (c <= s && s <= c + 5) can2 = false;
	}
	printf("%s\n", (can1 || can2) ? "YES" : "NO");
	return 0;
	
}
