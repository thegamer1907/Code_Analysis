#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	int a[n][m], best[n];
	for (int i=0; i<n; i++) {
		best[i]=i;
		for (int j=0; j<m; j++) cin>>a[i][j];
	}
	for (int j=0; j<m; j++) {
		int k=0;
		for (int i=1; i<n; i++) {
			if(a[i][j]<a[i-1][j]) k=i;
			best[i]=min(best[i],k);
		}
	}
	int q; cin>>q;
	while(q--) {
		int l,r; cin>>l>>r;
		cout << (best[r-1]<=l-1 ? "Yes" : "No") << endl;
	}
	return 0;
}
