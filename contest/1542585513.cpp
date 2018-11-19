#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<assert.h>
#include<iostream>
#include<string>
using namespace std;

int main() {
	double h, m, s, t1, t2;
	scanf("%lf%lf%lf%lf%lf", &h, &m, &s, &t1, &t2);
	if (h >= 12) h -= 12;
	if (t1 >= 12) t1 -= 12;
	if (t2 >= 12) t2 -= 12;
	s /= 60;
	m = (m + s) / 60;
	h = (h + m) / 12;
	t1 /= 12;
	t2 /= 12;
	bool flag = 0;
	if (t1 > t2) swap(t1, t2);
	if ((h <= t1 || h >= t2) && (m <= t1 || m >= t2) && (s <= t1 || s >= t2)) flag = 1;
	if ((h >= t1 && h <= t2) && (m >= t1 && m <= t2) && (s >= t1 && s <= t2)) flag = 1;
	printf("%s\n", flag ? "YES" : "NO");
	//system("pause");
	return 0;
}