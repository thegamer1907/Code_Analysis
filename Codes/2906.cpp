#include <bits/stdc++.h>

#define ALL(v) v.begin(), v.end()
#define REP(i, a, b) for (int i = a; i < b; i++)
#define REPD(i, a, b) for (int i = a; i > b; i--)
#define REPLL(i, a, b) for (ll i = a; i < b; i++)
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define FORD(i, a, b) for (int i = a; i >= b; i--)
#define FORLL(i, a, b) for (ll i = a; i <= b; i++)

using namespace std;

typedef long long ll;
typedef long double ld;

typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef pair<ld, ld> pld;

#define remax(a, b) a = max(a, b)
#define remin(a, b) a = min(a, b)

#define popcount __builtin_popcount
#define pb push_back
#define mp make_pair
#define st first
#define y first
#define nd second
#define x second

#define eps 1e-9
#define pi acos(-1.0)

#ifdef LOCAL
#define ASSERT(x) assert(x)
#else
#define cerr if(0)cout
#define ASSERT(x) ;
#endif

const int N = 1000123;

int z, n;
string s;
int ps[N];

void pref_suf(string& w, int *p) {
	p[0] = 0;
	REP(i, 1, w.size()) {
		p[i] = p[i-1];
		while(p[i] > 0 && w[i] != w[p[i]]) p[i] = p[p[i]-1];
		if (w[i] == w[p[i]]) p[i]++;
	}
}

int main() {
  ios_base::sync_with_stdio(0);

  cin >> s;
  n = s.size();
  pref_suf(s, ps);

  int res = ps[n-1];
  REP(i, 1, n-1) {
  	if(ps[i] == res && res) {
  		cout << s.substr(0, res) << endl;
  		return 0;
  	}
  }
  if(res)
  	res = ps[res-1];

  if(res)
  	cout << s.substr(0, res) << endl;

  else
  	cout << "Just a legend" << endl;
}

