# include "bits/stdc++.h"
using namespace std;
const int N = 1e6 + 5;
const int M = 1e7 + 5;
int n, x[N], m, l, r;
map<int, int> dp0;
int spf[M];
void sieve() {
	for (int i = 1; i < M; i++)
		spf[i] = i;
	for (int i = 4; i < M; i += 2) 
		spf[i] = 2;
	for (int i = 3; i * i < M; i += 2)
		if (spf[i] == i)
			for (int j = i + i; j < M; j += i)
				spf[j] = i;
	for (int i = 2; i < M; i++)
		if (spf[i] == i)
			dp0[i];
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	sieve();
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x[i];
		set<int> s;
		while (x[i] > 1) {
			s.insert(spf[x[i]]);
			x[i] /= spf[x[i]];
		}
		for (auto si : s)
			dp0[si]++;
	}
	vector<pair<int, int> > v;
	for (auto ii : dp0) {
		v.push_back({ii.first, ii.second});
	}
	for (int i = 1; i < v.size(); i++)
		v[i].second += v[i - 1].second;
	cin >> m;
	for (int i = 1; i <= m; i++) {
		cin >> l >> r;
		int L = l, R = r;
		int lo = 0, hi = v.size() - 1;
		while (lo < hi) {
			int mid = (lo + hi) >> 1;
			if (v[mid].first < l) lo = mid + 1;
			else hi = mid;
		}
		l = lo;
		lo = 0, hi = v.size() - 1;
		while (lo < hi) {
			int mid = (lo + hi + 1) >> 1;
			if (v[mid].first <= r) lo = mid;
			else hi = mid - 1;
		}
		r = lo;
		if (!(v[l].first >= L && v[l].first <= R && v[r].first >= L && v[r].first <= R)) cout << "0\n";
		else cout << max(0, v[r].second - ((l == 0) ? 0 : v[l - 1].second)) << "\n";
	}
}