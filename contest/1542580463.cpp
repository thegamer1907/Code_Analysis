#include <bits/stdc++.h>

using namespace std;

int main() {
	int hh, mm, ss; cin >> hh >> mm >> ss; hh %= 12;
	int tt1, tt2; cin >> tt1 >> tt2; tt1 %= 12; tt2 %= 12;
	double h  = 360.0 / 12.0 * (hh + mm / 60.0 + ss / 3600.0);
	double m  = 360.0 / 60.0 * (mm + ss / 60.0);
	double s  = 360.0 / 60.0 * ss;
	double t1 = 360.0 / 12.0 * tt1;
	double t2 = 360.0 / 12.0 * tt2;
	if (t1 > t2) {
		swap(t1, t2);
	}
	if (
		!(
			(t1 < h && h < t2) ||
			(t1 < m && m < t2) ||
			(t1 < s && s < t2)
		) ||
		!(
			(t2 < h || t2 < m || t2 < s) || 					
			(h < t1 || m < t1 || s < t1)
		)
	) {
		puts("YES");
	} else {
		puts("NO");
	}	
}