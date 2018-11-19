#include <bits/stdc++.h>
#define endl '\n'
#define Long long long
#define forn(i, n) for(int i = 0; i < n; ++i)
#define rep(i,a,b) for(int i = a; i < b; ++i)
#define pii pair<double, int>
#define fi first
#define se second
#define pb push_back
using namespace std;
	
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	double h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;

	vector< pii > data;
	data.pb(pii(s*6.0, 0));
	data.pb(pii(m*6.0 + s/10.0, 1));
	data.pb(pii(h*30.0 + (30.0*(m*60.0 + s))/3600.0, 2));

	data.pb(pii(t1*30.0, 3));
	data.pb(pii(t2*30.0, 4));

	sort(data.begin(), data.end());
	
	bool valid = false;
	forn(i, data.size()) {
		if (data[i].se == 3 && data[(i+1)%5].se == 4 ||
			data[i].se == 4 && data[(i+1)%5].se == 3)
			valid = true;
	}

	cout << (valid? "YES": "NO") << endl;
	return 0;
}

