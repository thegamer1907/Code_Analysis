#include <iostream>
#include <fstream>
#include <cstdio>
#include <cassert>
#include <cmath>
#include <queue>
#include <map>
#include <stack>
#include <set>
#include <string>
#include <utility>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <ctime>
#include <vector>                              
using namespace std;
#define fname ""
#define ull unsigned long long
#define ll long long
#define INF 1000*1000*1000
#define f first
#define s second
#define mp make_pair
#define pb push_back
#define sz size()
const int N = 1000;
ll ps, pc, pb, nb, nc, ns, ans = 0, price, needs, needb, needc;
string s;
bool ok (ll x) {
	ll tb = x * needb;
	ll ts = x * needs;
	ll tc = x * needc;
	tb = max(0ll, tb - nb);
	ts = max(0ll, ts - ns);
	tc = max(0ll, tc - nc);
	if (price >= tb * pb + ts * ps + tc * pc) return 1;
	return 0;
}
int main ()
{	
	#ifndef ONLINE_JUDGE
	freopen (fname"in","r",stdin);
	freopen (fname"out","w",stdout);
	#endif

	cin >> s;

	for (int i = 0; i < s.size(); i ++ ) {
		if (s[i] == 'B') ++needb;
		else if (s[i] == 'S') ++ needs;
		else ++ needc;
	}
	
	cin >> nb >> ns >> nc;
	cin >> pb >> ps >> pc >> price;

	ll l = 0, r = 1000000000000000ll;

	while (l <= r) {
		ll mid = (l + r) >> 1;
		if (ok(mid)) {
			ans = max(ans, mid);
			l = mid + 1;
		}
		else r = mid - 1;
	}

	cout << ans;

	return 0;
}
