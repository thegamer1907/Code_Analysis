/******************************************************\
*                                                      *
*               <Shablon information>  :               *
*       <Created by>            :   <X1st>             *
*       <Version>               :   <1.1a>             *
*       <Date of last change>   :   <22.10.2017>       *
*       <Good Luck!>            :   <Thx 4 using>      *
*                                                      *
\******************************************************/

#pragma comment(linker, "/stack:20000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,sse3,sse4,popcnt,abm,mmx")

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define B(name) begin(name)
#define E(name) end(name)
#define RB(name) rbegin(name)
#define RE(name) rend(name)

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<pii,pii> pII;
typedef pair<ll,ll> pll;
typedef pair<pll,pll> pLL;

const int N = 1100;
const int MAXN = int(1e7) + 100;
const int Mmask = (1 << 20);
const int mod = int(1e9) + 7;
const ll MOD = (ll)(1e18) + 7ll;

int solution();

int main (int argc, char * const argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie (nullptr); cout.tie (nullptr);
	return solution();
}

int n, cnt[MAXN], fcnt[MAXN];
bool u[MAXN];

int solution() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int c; cin >> c;
		fcnt[c]++;
	}
	for (int i = 2; i <= int(1e7); i++) {
		cnt[i] += cnt[i - 1];
		if (!u[i]) {
			cnt[i] += fcnt[i];
			for (int j = 2 * i; j <= int(1e7); j += i) {
				u[j] = 1;
				cnt[i] += fcnt[j];
			}
		}
	}
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int l, r; cin >> l >> r;
		r = min(r, int(1e7));
		l = min(l, int(1e7));
		cout << cnt[r] - cnt[l - 1] << endl;
	}
	return 0;
}
