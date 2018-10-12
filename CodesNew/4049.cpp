#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,q; cin>>n>>q;
	vector<ll> a(n+1), pre(n+2,0);
	for (int i=1; i<=n; i++) cin>>a[i];
	for (int i=1; i<=n; i++) pre[i]=a[i]+pre[i-1];
	pre[n+1]=pre[n]+1;

	vector<ll> k(q);
	for (int i=0; i<q; i++) cin>>k[i];

	vector<ll> k2(q,0);
	ll cur=0;
	for (int i=0; i<q; i++) {
		cur+=k[i];
		if(cur>=pre[n]) k2[i]=pre[n], cur=0;
		else k2[i]=cur;
	}

	for (int i=0; i<q; i++) {
		int ret=(n+1)-int(upper_bound(pre.begin(), pre.end(), k2[i])-pre.begin());
		if(!ret) ret=n;
		cout << ret << endl;
	}
	return 0;
}
