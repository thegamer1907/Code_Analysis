#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
typedef long long ll ;
using namespace std;
const int N = 2e5+8;
int n,q ;
ll in[N];
vector<ll> par;
int main(){
	scanf("%d%d",&n,&q);
	par.pb(0);
	for(int i=1 ; i<=n ; ++i){
		scanf("%d",in+i);
		par.pb(par[i-1]+in[i]);
	}
	ll idx = 0 , k = 0 ;
	while(q--){
		ll x ; scanf("%lld",&x);
		if (x+k >= par[n]){
			printf("%d\n",n);
			k = 0;
			idx = 0 ;
		}else{
			idx = upper_bound(par.begin()+idx,par.end(),x+k)-par.begin()-1;
			cout << n - idx << "\n";
			k += x ;
		}
	}
}