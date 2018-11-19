#include <bits/stdc++.h>

using namespace std;


int main () {
	int h,m,s,t1,t2;
	cin >> h >> m >> s >> t1 >> t2;
	double ps = s;
	double pm = m+1.0*s/60;
	if (h == 12) h = 0;
	double ph = 5.0*(h+pm/60);
	vector <double> a = {ps,pm,ph};
	sort(a.begin(),a.end());

	double p1 = t1*5, p2 = t2*5;

	bool res = 0;
	if (a[0] <= p1 && p1 <= a[1] && a[0] <= p2 && p2 <= a[1]) res = 1;
	if (a[1] <= p1 && p1 <= a[2] && a[1] <= p2 && p2 <= a[2]) res = 1;
	if ((p1 <= a[0] || p1 >= a[2]) && (p2 <= a[0] || p2 >= a[2])) res = 1;
	puts(res ? "YES" : "NO");
}
