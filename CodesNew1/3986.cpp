#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int i=0;i<n;i++)

typedef long long ll;

#define pb push_back

#define all(a) a.begin(),a.end() 

const int N = 2e5+10;

ll v[N];
vector<ll> ac;

int main(){
	int n, q;
	scanf("%d%d", &n, &q);
	
	fr(i,n){
		scanf("%lld", v+i);
		ac.pb(0);
		ac[i] = v[i];
		if(i) ac[i]+=ac[i-1];
	}
	
	ll curdano = 0;
	int idw = 0;
	
	fr(iq,q){
		ll x;
		scanf("%lld", &x);
		curdano+=x;
		
		idw = (upper_bound(all(ac),curdano)-ac.begin());
		if(idw==n) idw = 0, curdano = 0;
		printf("%d%c", n-idw, "\n"[iq==-1]);
	}
	
	return 0;
}
