#include <bits/stdc++.h>
using namespace std;

int a, b, c, d, e;

int main() {
	//freopen("r.in", "r", stdin);
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	b /= 5;
	c /= 5;
	a = a * 2 + 1;
	b = b * 2 + 1;
	c = c * 2 + 1;
	d = d * 2;
	e = e * 2;
	if (d > e) swap(d, e);
	int cnt = 0;
	if (d < a && a < e) cnt ++;
	if (d < b && b < e) cnt ++;
	if (d < c && c < e) cnt ++;
	if (cnt == 0 || cnt == 3) puts("YES");
	else puts("NO");


	return 0;
}
