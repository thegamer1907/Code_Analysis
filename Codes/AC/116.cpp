#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const ll N = 1e5 + 10;
ll x[N];
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll n,q,m,a,b,c,i,j,k;
	cin>>n; for(i=0;i<n;i++) cin>>x[i];
	cin>>q; sort(x,x+n);
	while(q--){
		cin>>m;
		ll hi,lo,mi; lo=0; hi=n;
		while(lo < hi){
			mi = lo + (hi-lo)/2;
			if(x[mi] <= m) lo=mi+1;
			else hi=mi;
		}
		cout<<hi<<endl;
	}
	return 0;
}