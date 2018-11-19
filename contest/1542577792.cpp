#include "bits/stdc++.h"
#define fip ios_base :: sync_with_stdio(false);cin.tie(0)
using namespace std;
const int N = 1e5 + 5;

bool blocked[N];

bool ok(int a , int b) {
	int ctr = a;
	while(true) {
		if(ctr == b) return true;
		if(blocked[ctr]) return false;
		ctr = (ctr + 1) % 60;
	}
	return false;
}


void solve() {
	int h , m , s , t1 , t2;
	cin >> h >> m >> s >> t1 >> t2;
	h = (h * 5) % 60;
	if(m + s > 0) {
		blocked[h + 1] = true;
	} else {
		blocked[h] = true;
	}
	blocked[m] = true , blocked[s] = true;
	t1 = (t1 * 5) % 60;
	t2 = (t2 * 5) % 60;
	bool yes = ok(t1 , t2) or ok(t2 , t1);
	puts(yes ? "YES" : "NO");
}


int main() {
	fip;
	solve();
	return 0;
}