#include<bits/stdc++.h>
using namespace std;
int h, m, s, t1, t2;
const double pi = acos(-1);
int main()
{
	scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
	double d[3];
	d[0] = 2 * pi / 60 * s;
	d[1] = 2 * pi / 60 * (m + d[0] / (2 * pi));
	d[2] = 2 * pi / 12 * (h % 12 + d[1] / (2 * pi));
	sort(d, d + 3);
	double tt1 = 2 * pi / 12 * (t1%12);
	double tt2 = 2 * pi / 12 * (t2%12);
	int ans[2] = { 3,3 };
	for (int i = 0; i < 2; i++) {
		if (tt1 > d[i] && tt1 < d[i + 1])ans[0] = i + 1;
		if (tt2 > d[i] && tt2 < d[i + 1])ans[1] = i + 1;
	}
	if (ans[0] == ans[1])printf("YES\n");
	else printf("NO\n");
}