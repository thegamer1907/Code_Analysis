#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
const int MaxN = 1000;
using namespace std;
int t1, t2;
int s[4];
double a[5];
int main()
{
	for (int i = 1; i <= 3; i++) scanf("%d", &s[i]);
	scanf("%d%d", &t1, &t2);
	s[1] *= 3600; s[2] *= 60;
	s[1] = s[1] + s[2] + s[3];
	double at1 = t1 * 30.0, at2 = t2 * 30.0;
	if(t1 > t2) swap(at1, at2);
	a[0] = s[1] / 120.0, a[1] = s[1] / 10.0, a[2] = s[1] * 6;
	while(a[0] > 360) a[0] -= 360;
	while(a[1] > 360) a[1] -= 360;
	while(a[2] > 360) a[2] -= 360;
	//printf("%lf %lf %lf\n", a[0], a[1], a[2]);
	sort(a, a + 3);	
	//printf("%lf %lf\n", at1, at2);
	bool ok = false;
	if(at1 <= a[0] && at2 <= a[0]) ok = true;
	if(at1 >= a[0] && at2 >= a[0] && at1 <= a[1] && at2 <= a[1]) ok = true;
	if(at1 >= a[1] && at2 >= a[1] && at1 <= a[2] && at2 <= a[2]) ok = true;
	if(at1 >= a[2] && at2 >= a[2]) ok = true;
	if(at1 <= a[0] && at2 >= a[2]) ok = true;
	if(ok) printf("YES\n");
		else printf("NO\n");
}
