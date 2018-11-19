#include <bits/stdc++.h>
using namespace std;

typedef long long lint; typedef pair<int, int> ii;
const int MOD = 1'000'000'007, MOD2 = 1'000'000'009;
const int INF = 0x3f3f3f3f; const lint BINF = 0x3f3f3f3f3f3f3f3fLL;

int n, k, a[100005][5];
int cnt[16]={};


int solve(){
	cin >> n >> k;
	for(int i=0;i<n;i++) for(int j=0;j<k;j++)
		cin >> a[i][j];
	for(int i=0;i<n;i++){
		int wtf = 0;
		for(int j=0;j<k;j++) wtf |= a[i][j] << j;
		cnt[wtf]++;
	}
	for(int i=0;i<1<<k;i++) for(int j=0;j<1<<k;j++) if((i & j) == 0){
		if(cnt[i] && cnt[j]) return cout << "YES" << endl, 0;
	}
	if(cnt[0])
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
    return 0;
}

int main(){
	ios::sync_with_stdio(0);
	// int t; cin >> t; while(t--)
	solve();
	// cout << (solve() ? "YES" : "NO") << endl;
	return 0;
}
