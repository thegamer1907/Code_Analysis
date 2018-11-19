#include<bits/stdc++.h>

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define PB push_back

using namespace std;

int main(){
	fastio;

	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;

	double ss = s;
	double mm = m + s / 60.0;
	double hh = h * 5  + m / 60.0 + s / 3600.0;
	if (hh > 60) hh -=60;
	if (mm > 60) mm -=60;
	if (ss > 60) ss -=60;

	t1 = (t1 * 5) % 60;
	t2 = (t2 * 5) % 60;
	vector<double> t = {ss, mm, hh};
	sort(t.begin(), t.end());

	int tt1 = 0;
	int tt2 = 0;
	for (auto el : t) if (t1 > el) tt1++;
	for (auto el : t) if (t2 > el) tt2++;
	tt1 = (tt1 + 1) % 3;
	tt2 = (tt2 + 1) % 3;

	// cout << ss << " " << mm <<" " << hh << endl;
	// cout << tt1 << " " << tt2 << endl;
	if (tt1 == tt2) cout << "YES\n";
	else cout << "NO\n";

	return 0;
}