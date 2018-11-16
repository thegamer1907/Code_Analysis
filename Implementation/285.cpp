/******************************************************\
*                                                      *
*               <Shablon information>  :               *
*       <Created by>            :   <Kideri>           *
*       <Version>               :   <1.2a>             *
*       <Date of last change>   :   <02.03.2018>       *
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

/*stl defines*/
#define B(name) begin(name)
#define E(name) end(name)
#define RB(name) rbegin(name)
#define RE(name) rend(name)
#define full(name) Bx(name), E(name)
#define rfull(name) RB(name), RE(name)

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<pii,pii> pII;
typedef pair<ll,ll> pll;
typedef pair<pll,pll> pLL;

const int N = 1100;
const int MAXN = int(1e6) + 100;
const int Mmask = (1 << 20);
const int mod = int(1e9) + 7;
const ll MOD = (ll)(1e18) + 7ll;

int solution();

int main (int argc, char * const argv[]) {
	ios_base::sync_with_stdio (false);
	cin.tie (nullptr); cout.tie (nullptr);
	return solution();
}

int n, a, b;

int solution() {
	cin >> n >> a >> b;
	int lg = 2;
	int r = 1;
	while (true) {
		if (lg == n) return cout << "Final!", 0;
		for (int i = 1; i <= n; i += lg) {
			if (a >= i && b >= i && a < i + lg && b < i + lg) return cout << r, 0;
		}
		r++;
		lg <<= 1;
	}
	return 0;
}
