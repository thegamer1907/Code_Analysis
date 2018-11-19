#include <bits/stdc++.h>

#define debug(x) cout << #x << " = " << x << endl
#define fori(i, ini, lim) for(int i = int(ini); i < int(lim); i++)
#define ford(i, ini, lim) for(int i = int(ini); i >= int(lim); i--)

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main() {
	ios_base::sync_with_stdio(false);

	long double h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;

	if(h == 12.0) {
		h = 0.0;
	}
	
	pair<long double, int> pt1 = pair<long double, int>(t1, 0);
	pair<long double, int> pt2 = pair<long double, int>(t2, 0);
	pair<long double, int> ps = pair<long double, int>((s / 60.0) * 12.0, 1);
	pair<long double, int> pm = pair<long double, int>(((m * 60.0 + s) / 3600.0) * 12.0, 1);
	pair<long double, int> ph = pair<long double, int>(((h * 3600.0 + m * 60.0 + s) / 43200.0) * 12.0, 1);

	vector< pair<long double, int> > v {pt1, pt2, ps, pm, ph};
	sort(v.begin(), v.end());

	bool bateu = false;
	fori(i, 0, v.size()) {
		if(v[i].second == 0 && v[(i + 1) % (int) v.size()].second == 0) {
			bateu = true;
		}
	}

	cout << (bateu ? "YES" : "NO") << '\n';

	return 0;
}

