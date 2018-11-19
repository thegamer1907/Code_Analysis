#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;

int h, m, s, t1, t2, flag;
int a[10];
int main()
{
	flag = 0;
	scanf("%d %d %d %d %d", &h, &m, &s, &t1, &t2);
	t1 = t1 * 1000000;
	t2 = t2 * 1000000;
	s = s * 200000;
	m = m * 200000 + s / 60;
	if(h == 12) h = 0;
	h = h * 1000000 + m / 60;
	a[1] = s;
	a[2] = m;
	a[3] = h;
	sort(a + 1, a + 1 + 3);
	if(a[1] < t1 && a[1] < t2 && a[2] > t1 && a[2] > t2) flag = 1;
	else if(a[2] < t1 && a[2] < t2 && a[3] > t1 && a[3] > t2) flag = 1;
	else if(a[1] > t1 && a[1] > t2 || a[3] < t1 && a[3] < t2) flag = 1;
	if(t1 < a[1]) t1 += 12000000;
	if(t2 < a[2]) t2 += 12000000;
	if(a[3] < t1 && a[3] < t2 && a[1] + 12000000 > t1 && a[1] + 12000000 > t2) flag = 1;
	if(flag == 1) printf("YES\n");
	else printf("NO\n");
	return 0;
}