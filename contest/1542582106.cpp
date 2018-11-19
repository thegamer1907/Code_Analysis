#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

#define swap(a,b,t) t=a,a=b,b=t
using namespace std;

int main() {
	double h, m, s, t1, t2;
	int i, j,t;
	int inter = 0,side =0;
	scanf("%lf%lf%lf%lf%lf", &h, &m, &s, &t1, &t2);
	
	h = (h+m*0.5/30+ s*0.5/(30*60));
	if (h >= 12)h -= 12;
	m = (m+s*0.5/30);
	if (m >= 60)m -= 12;
	m /= 5;
	s /= 5;

	if (t2 < t1) swap(t1, t2,t);

	if (h <= t2 && h >= t1)inter++;
	if (m <= t2 && m >= t1)inter++;
	if (s <= t2 && s >= t1)inter++;
	if (inter == 3 || inter == 0) puts("YES");
	else puts("NO");
}