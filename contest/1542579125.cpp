#include <bits/stdc++.h>

#define ll long long
#define mp make_pair
#define pb push_back
#define f first
#define vi vector<int>
#define vl vector<long long>
#define sz size()
#define x first
#define y second
#define pii pair<int, int>
#define pll pair<ll, ll>
#define ld long double

using namespace std;

int h, m, s, t1, t2;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> h >> m >> s >> t1 >> t2;
	if(h == 12) h = 0;
	if(t1 == 12) t1 = 0;
	if(t2 == 12) t2 = 0;

	s *= 3600;
	m = m * 3600 + s/60;
	h = h * 5 * 3600 + s/3600;
	


	bool ok = 1;
	for(int i = t1 * 5 * 3600; i != t2 * 5 * 3600; i++) {
		if(i == 216000) {
			i = 0;
			if(i == t2 * 5 * 3600) break;
		}

		if(i == s || i == h || i == m) ok = false;
	}

	if(ok) {
		cout << "YES\n";
		return 0;
	}

	ok = 1;
	for(int i = t2 * 5 * 3600; i != t1 * 5 * 3600; i++) {
		if(i == 216000) {
			i = 0;
			if(i == t1 * 5 * 3600) break;
		}

		if(i == s || i == h || i == m) ok = false;
	}

	if(ok) {
		cout << "YES\n";
		return 0;
	}

	cout << "NO\n";
	return 0;
}