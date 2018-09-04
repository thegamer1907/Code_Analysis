#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll mx=1500;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,S,ct=0,T=0,low=0,high,k; cin>>n>>S; high=n;
	vector<ll> a(n);
	for (int i=0; i<n; i++) cin>>a[i];
	for (int i=0; i<20; i++) {
		k=(low+high+1)/2;
		vector<ll> st(n);
		for (ll j=0; j<n; j++) st[j]=a[j]+k*(j+1);
		sort(st.begin(),st.end());
		ll cur=0;
		for (int j=0; j<k; j++) cur+=st[j];
		if(cur>S) high=k-1;
		else low=k, ct=k, T=cur;
	}
	cout << ct << " " << T << endl;
	return 0;
}
