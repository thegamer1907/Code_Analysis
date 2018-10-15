#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
typedef pair<int, int> ii;

const int MOD = 1e9 + 7;
const int INF = 0x3f3f3f3f;

int n, a[500005];

int check(int x){
	x = n - x;
	for(int i=0;i<x;i++) if(a[i] * 2 > a[i+n-x]) return 0;
	return 1;
}

int solve(){
	cin >> n; for(int i=0;i<n;i++) cin >> a[i];
	sort(a, a+n);
	int lo = (n + 1) / 2, hi = n + 1;
	while(lo < hi){
		int mi = lo + hi >> 1;
		if(check(mi)) hi = mi; else lo = mi + 1;
	}
	cout << lo << endl;
	return 0;
}


int main(){
	ios::sync_with_stdio(0);
	// int t; cin >> t; while(t--)
	solve();
	// cout << (solve() ? "YES" : "NO") << endl;
	return 0;
}
