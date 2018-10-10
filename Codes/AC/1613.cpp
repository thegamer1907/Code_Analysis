#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define INFLL 0x3f3f3f3f3f3f3f3fll
#define NSYNC ios::sync_with_stdio(false)
#define FOR(i,a,b) for(int i=a; i<(b); ++i)
#define FOR0(i,b) for(int i=0; i<(b); ++i)
#define DBG(x) cout << #x << " == " << x << endl
#define DBGV(v) for(int x : v) cout << x << " "; cout << endl
#define DBGP(x,y) cout << "(" << x << ", " << y << ")" << endl
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define sz(a) (int)((a).size())
#define all(c) (c).begin(),(c).end()
#define R(x) scanf(" %d",&(x))
#define RR(x,y) scanf(" %d %d",&(x), &(y))
#define CLR(v) memset(v, 0, sizeof(v))
#define SET(v) memset(v, -1, sizeof(v))

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

const int MAXN = 100010;
int v[MAXN];

int n;

ll tot(int x) {
	ll ans = 0;
	multiset<ll> st;
	FOR0(i,n) {
		st.insert(v[i] + (i+1)*1LL*x);
	}
	while (x--) {
		ans += *st.begin();
		st.erase(st.begin());
	}
	return ans;
}

int main() {
	NSYNC;
	int s;
	cin >> n >> s;
	FOR0(i,n) cin >> v[i];
	int b=0, e=n+1;
	while (b<e) {
		int m = (b+e)/2;
		if (tot(m) > s) e=m;
		else b=m+1;
	}
	cout << e-1 << " " << tot(e-1) << endl;
	return 0;
}