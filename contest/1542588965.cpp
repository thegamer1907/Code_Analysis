#include <cstdio>
#include <utility>
using namespace std;
int h, m, s, t1, t2, cnt = 0;
double ah, am, as, at1, at2;
int main (){
	scanf("%d %d %d %d %d", &h, &m, &s, &t1, &t2);
	at1 = t1 * 30.0;
	at2 = t2 * 30.0;
	as = s * 6.0;
	am = m * 6.0 + s / 10.0;
	ah = h * 30.0 + m / 2.0 + s / 120.0;
	if (at1 >= 360.0)
		at1 -= 360.0;
	if (at2 >= 360.0)
		at2 -= 360.0;
	if (as >= 360.0)
		as -= 360.0;
	if (am >= 360.0)
		am -= 360.0;
	if (ah >= 360.0)
		ah -= 360.0;
	if (at1 > at2)
		swap(at1, at2);
	if (at1 < ah && ah < at2)
		cnt++;
	if (at1 < am && am < at2)
		cnt++;
	if (at1 < as && as < at2)
		cnt++;
	printf("%s\n", cnt == 3 || cnt == 0 ? "YES" : "NO");
	return 0;
}