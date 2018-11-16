#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll N=100001;
void snum(ll &a){scanf("%lld",&a);}
void snum(ll &a, ll &b){scanf("%lld %lld",&a,&b);}
void snum(ll &a, ll &b, ll &c){scanf("%lld %lld %lld",&a,&b,&c);}
void snum(ll &a, ll &b, ll &c, ll &d){scanf("%lld %lld %lld %lld",&a,&b,&c,&d);}

ll A[N];
ll cnt[N];
ll ans[N];

int main(){
	ll n,m;
	snum(n,m);
	for(ll i=0; i<n; i++){
		snum(A[i]);
	}
	ll rep=0;
	for(ll i=n-1; i>=0; i--){
		if(cnt[A[i]]==0){
			cnt[A[i]]++;
			rep++;
		}
		ans[i]=rep;
	}
	ll x;
	for(ll i=0; i<m; i++){
		snum(x);
		x--;
		printf("%lld\n",ans[x]);
	}
	return 0;
}
