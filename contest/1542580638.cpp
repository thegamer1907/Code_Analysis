#include <cstdio>
#include <iostream>

using namespace std;

bool ok = false;
double h, m, s, t1, t2;

bool check1(double x){
	return x < t1 || x > t2;
}
bool check2(double x){
	return x < t2 && x > t1;
}
int main(){
	scanf("%lf%lf%lf%lf%lf", &h, &m, &s, &t1, &t2);
	if (t1 > t2) swap(t1, t2);
	double sec = m * 60 + s;
	m += s / 60.0;
	h += sec / 3600.0; h *= 5;
	t1 *= 5; t2 *= 5;
	if (t2 >= 60.0) t2 -= 60.0;
	if (t1 >= 60.0) t1 -= 60.0;
	if (s >= 60.0) s -= 60.0;
	if (m >= 60.0) m -= 60.0;
	if (h >= 60.0) h -= 60.0;
	if (t1 > t2) swap(t1, t2);
	if (check1(h) && check1(m) && check1(s)) ok = true;
	if (check2(h) && check2(m) && check2(s)) ok = true;
	if (ok) printf("YES");
	else printf("NO");
	return 0;
}