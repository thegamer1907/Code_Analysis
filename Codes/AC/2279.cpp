//long time no ac
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int ,int> pii;
typedef pair<ll ,ll> pll;
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(X) (X).begin(), (X).end()
#define sll(n) scanf("%lld",&n)
#define sll2(x,y) scanf("%lld%lld",&x,&y)
#define sll3(x,y,z) scanf("%lld%lld%lld",&x,&y,&z)
#define REP(i,x,y) for(ll i = x;i <= y;++i)
#define debug(x) cerr<<#x<<"::"<<x<<endl
#define debug2(x,y) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n"
#define debug3(x,y,z) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n"
#define debug4(x,y,z,w) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\t"<<#w<<" :: "<<w<<"\n"
ll power(ll x,ll y,ll z) {
	ll ret = 1;
	while(y > 0) {
		if(y & 1) ret = (ret*x)%z;
		x = (x*x)%z;
		y >>= 1;
	}
	return ret;
}
const ll N = 1e7+5,MOD = 1e9+7;
ll sp[N],v[N],A[N],BIT[N];
vector<ll>primes;
void sieve() {
	sp[1] = 1;
	for(ll i = 2;i < N;i += 2) sp[i] = 2, v[i] = 1;
	primes.pb(2);
	for(ll j = 3;j < N;j += 2) {
		if(!v[j]) {
			primes.pb(j);
			sp[j] = j;
			for(ll i = j*j;i < N; i += j) {
				if(!v[i]) sp[i] = j,v[i] = 1;
			}
		}
	}
	return;
}
void update(ll idx,ll val) {
	for(;idx < N;idx += (idx&-idx)) BIT[idx] += val;
	return;
}
ll query(ll idx) {
	ll ret = 0;
	for(;idx > 0;idx -= (idx&-idx)) ret += BIT[idx];
	return ret;
}
int main() {
	
	sieve();
	ll n;
	sll(n);
	REP(i,1,n) {
		sll(A[i]);
		while(A[i] > 1) {
			ll di = sp[A[i]];
			while(A[i]%di == 0) A[i] /= di;
			update(di,1);
		}
	}
	ll m;
	sll(m);
	while(m--) {
		ll l,r;
		sll2(l,r);
		if(l >= N) printf("0\n");
		else {
			auto it = lower_bound(all(primes),l);
			if(it == primes.end()) printf("0\n");
			else {
				ll le = *it,ri;
				if(r >= N) ri = N-1;
				else {
					auto itr = lower_bound(all(primes),r);
					if(itr == primes.end()) ri = N-1;
					else ri = *itr;
					if(ri > r) itr--,ri = *itr;
				} 
				if(le > ri) printf("0\n");
				else printf("%lld\n",query(ri) - query(le-1));
			}
		}
	}



	return 0;
}