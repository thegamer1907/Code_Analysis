/******************************************************\
*                                                      *
*               <Shablon information>  :               *
*       <Created by>            :   <X1st>             *
*       <Version>               :   <1.1b>             *
*       <Date of last change>   :   <30.10.2017>       *
*       <Good Luck!>            :   <Thx 4 using>      *
*                                                      *
\******************************************************/

#pragma comment(linker, "/stack:20000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,sse3,sse4,popcnt,abm,mmx")

#include <bits/stdc++.h>

using namespace std;


/*useful defins*/
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define v vector

/*stl defines*/
#define B(name) begin(name)
#define E(name) end(name)
#define RB(name) rbegin(name)
#define RE(name) rend(name)
#define full(name) B(name), E(name)
#define rfull(name) RB(name), RE(name)

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<pii,pii> pII;
typedef pair<ll,ll> pll;
typedef pair<pll,pll> pLL;
typedef v<int> vi;

const int N = 1100;
const int MAXN = int(1e6) + 100;
const int Mmask = (1 << 20);
const int mod = int(1e9) + 7;
const ll MOD = (ll)(1e18) + 7ll;

int solution();

int main (int argc, char * const argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie (nullptr); cout.tie (nullptr);
	return solution();
}

ll B, S, C, nb, ns, nc, pb, ps, pc, r;
string s;

int get (char cur) {
	int cnt = 0;
	for (auto c_cur : s) cnt += (c_cur == cur);
	return cnt;
}

bool check (ll cnt) {
	ll rr = r;
	if (max(0ll, (cnt * B - nb)) * pb > rr) return 0;
	// if (cnt == 2) cout << 1 << endl;
	rr -= max(0ll, (cnt * B - nb)) * pb;
	if (max(0ll, (cnt * S - ns)) * ps > rr) return 0;
	rr -= max(0ll, (cnt * S - ns)) * ps;
	if (max(0ll, (cnt * C - nc)) * pc > rr) return 0;
	return 1;
}

int solution() {
	cin >> s;
	B = get ('B');
	S = get ('S');
	C = get ('C');
	// cout << B << ' ' << S << ' ' << C << endl;
	cin >> nb >> ns >> nc;
	cin >> pb >> ps >> pc;
	cin >> r;
	ll l = 0, R = (ll)(1e14);
	while (l <= R) {
		ll mid = (l + R) >> 1;
		if (check (mid)) l = mid + 1;
		else R = mid - 1;
	}
	if (check (l)) cout << l;
	else cout << R;
	return 0;
}
