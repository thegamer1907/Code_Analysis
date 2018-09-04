#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main(){
	ios::sync_with_stdio(0);
	cin.tie();
	
	string s; cin >> s;
	int B = 0, S = 0, C = 0;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == 'B') B++;
		if(s[i] == 'S') S++;
		if(s[i] == 'C') C++;
	}

	int nb, ns, nc; cin >> nb >> ns >> nc;
	ll pb, ps, pc; cin >> pb >> ps >> pc;
	ll r; cin >> r;
	if(B == 0) nb = 0;
	if(S == 0) ns = 0;
	if(C == 0) nc = 0;
	int unitCost = B*pb + S*ps + C*pc;
	ll ans = 0;
	while(nb > B && ns > S && nc > C) {
		ans++;
		nb -= B;
		ns -= S;
		nc -= C;
	}

	while(nb > 0 || ns > 0 || nc > 0) {
		int curCost = unitCost;
		curCost -= min(nb, B)*pb;
		curCost -= min(ns, S)*ps;
		curCost -= min(nc, C)*pc;
		if(r >= curCost) {
			r -= curCost;
			nb -= min(nb, B);
			ns -= min(ns, S);
			nc -= min(nc, C);
			ans++;
		} else {
			cout << ans << endl;
			return 0;
		}
	}

	ans += r / unitCost;
	cout << ans << endl;

	return 0;
}