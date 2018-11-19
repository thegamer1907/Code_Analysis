#include <bits/stdc++.h>

#define FOR(i,b,e) for(int i=(b); i <= (e); ++i)
#define FORD(i,b,e) for(int i=(b); i >= (e); --i)
#define REP(i,n) for(int i=0; i < (n); ++i)
#define SIZE(c) (int) (c).size()
#define ALL(c) (c).begin(), (c).end()
#define PB push_back
#define MP make_pair
#define ST first
#define ND second
#define FWD(i,a,b) for (int i=(a); i<(b); ++i)
#define BCK(i,a,b) for (int i=(a); i>(b); --i)
#define PI 3.14159265358979311600
#define pb push_back
#define mp make_pair
#define st first
#define nd second

using namespace std;

typedef long long ll;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

typedef vector < int > VI;
typedef vector<ll> VL;

typedef long double K;

const int N = 205;
const int M = 5005;

int n, m;
string s[N];
int result[N];

bool check(const string& s, int k) {
	int n = SIZE(s);
	if (n < k) return false;
	set<string> all;
	REP(i, n-k+1) all.insert(s.substr(i, k));
	return SIZE(all) == (1 << k);
}

int go(const string& s) {
	int k = 1;
	while (check(s, k)) ++k;
	return k - 1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;
	REP(i, n) {
		cin >> s[i];
		result[i] = go(s[i]);
	}
	cin >> m;
	REP(i, m) {
		int x, y;
		cin >> x >> y;
		--x; --y;
		if (SIZE(s[x]) + SIZE(s[y]) < M) {
			s[i+n] = s[x] + s[y];
			result[i+n] = go(s[i+n]);
		} else {
			s[i+n] = s[x] + s[y];
			s[i+n] = s[i+n].substr(0, M / 2) + s[i+n].substr(SIZE(s[n+i])-M/2+1, M/2);
			result[i+n] = go(s[i+n]);
		}
		result[i+n] = max(result[i+n], result[x]);
		result[i+n] = max(result[i+n], result[y]);
		cout << result[i+n] << '\n';
	}

	return 0;
}