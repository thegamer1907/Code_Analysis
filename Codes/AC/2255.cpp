//#define __USE_MINGW_ANSI_STDIO 0
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout<<#x<<" :: "<<x<<endl;
#define debug2(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<endl;
#define debug3(x,y,z) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<endl;

#define boost ios::sync_with_stdio(0); cin.tie(0)

#define fi first
#define se second

typedef long long ll;
typedef double ld;
typedef pair<ll, ll> pii;

const int N = 1e7 + 5;

/***************************************************************************/

int sv[N];

int kc = 0;
pii primes[N/10];
int pos[N];

int main() {

	boost;
	for(int i=2; i<N; i++) sv[i] = i;
	for(int i=2; i*i<N; i++) {
		if(sv[i] != i) continue;
		for(int j=i*i; j<N; j+=i) {
			sv[j] = min(sv[j], i);
		}
	}
	for(int i=2; i<N; i++) {
		if(sv[i] != i) continue;
		primes[++kc].fi = i;
		pos[i] = kc;
	}

	int n; cin>>n;
	for(int i=1; i<=n; i++) {
		int x; cin>>x;

		while(x > 1) {
			int p = sv[x];
			primes[pos[p]].se++;
			while(x % p == 0) x /= p;
		}
	}

	for(int i=1; i<=kc; i++) {
		primes[i].se += primes[i-1].se;
	}

	int m; cin>>m;
	while(m--) {
		int l, r; cin>>l>>r;
		r = upper_bound(primes+1, primes+kc+1, pii(r+1, -1)) - primes - 1;
		l = upper_bound(primes+1, primes+kc+1, pii(l, -1)) - primes - 1;
		cout<<primes[r].se - primes[l].se<<"\n";
	}
	
	return 0;
}