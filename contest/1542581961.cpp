#include <bits/stdc++.h>

#define I(x) (x >= t1&&x <= t2)

using namespace std;

int h, m, s, t1, t2;
int main()
{
	scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
	if (h == 12) h -= 12;
	if (t1 == 12) t1 -= 12;
	if (t2 == 12) t2 -= 12;
	int A = h * 3600 + m * 60 + s;
	int B = 12 * s + 720 * m;
	int C = 720 * s;
	t1 *= 3600;
	t2 *= 3600;
	if (t1 > t2) swap(t1, t2);
	if (!I(A)&&!I(B)&&!I(C))
		return puts("YES"), 0;
	bool flag = 1;
	if (A > t2||A < t1) flag = 0;
	if (B > t2||B < t1) flag = 0;
	if (C > t2||C < t1) flag = 0;
	puts(flag ? "YES" : "NO");
	return 0;
}
