#include <bits/stdc++.h>

using namespace std;

float l = 0, u = 0;

bool in_range(float x) {
	return (x >= l && x <= u);
}

bool out_range(float x) {
	return (x <= l || x >= u);
}

int main() {
	int h,m,s,t1,t2;
	cin >> h >> m >> s >> t1 >> t2;

	float ha, ma, sa;
	sa = s*6.0;
	ma = (m + float(s)/60.0)*6.0;
	ha = (h + float(m)/60.0 + float(s)/3600.0)*30;

	float t_min = min(t1, t2)*30;
	float t_max = max(t1, t2)*30;

	l = t_min;
	u = t_max;

	if (in_range(ha) && in_range(ma) && in_range(sa)) {
		cout << "YES" << endl;
	} 
	else if (out_range(ha) && out_range(ma) && out_range(sa)) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}