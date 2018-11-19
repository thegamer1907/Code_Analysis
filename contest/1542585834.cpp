// in the name of Allah
// and begin ... 

#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

long long h, m, s, t1, t2;

bool ok(long double x, long double y) {
	if(x <= t1 && t1 <= y && x <= t2 && t2 <= y) return 1;
	return 0;
}

bool okk(long double x, long double y) {
	if( ( (x <= t1 && t1 < 60) || (0 <= t1 && t1 <= y) )
		&& ( (x <= t2 && t2 < 60) || (0 <= t2 && t2 <= y) ) ) return 1;
	return 0;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> h >> m >> s >> t1 >> t2;
	h%=12;
	t1%=12;
	t2%=12;
	t1 *= 5;
	t2 *= 5;
	vector <long double> v;
	v.push_back(s);
	v.push_back(m + s/60.0);
	v.push_back(5 * h + (m + s/60.0) / 12.0);
	sort(v.begin(), v.end());
	if(ok(v[0], v[1])) cout << "Yes" << endl;
	else if(ok(v[1], v[2])) cout << "Yes" << endl;
	else if(okk(v[2], v[0])) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
