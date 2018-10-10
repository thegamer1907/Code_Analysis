#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef long double ld;

typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;

#define PB push_back

#define FOR(prom, a, b) for (ll prom = (a); prom < (ll) (b); ++prom)
#define F(a) FOR(i, 0, a)
#define FF(a) FOR(j, 0, a)

#define EPS (1e-10)

#define EQ(a, b) (fabs(a-b) <= fabs(a+b)*EPS)
#define INF (1<<29)

ll cnt[10000005];
ll fce[10000005];
ll nopri[10000005];
int main(){
	ios::sync_with_stdio(false);
	ll N, X, M, A, B;
	scanf("%lld", &N);
	F(N){
		scanf("%lld", &X);
		cnt[X]++;
	}
	for(int i=2;i<10000005;i++){
		if(!nopri[i]){
			ll sum=0;
			fce[i]=cnt[i];
			for(int j=i*2;j<10000005;j+=i){
				nopri[j]=1;
				fce[i]+=cnt[j];
			}
		}
	}
	for(int i=1;i<10000004;i++){
		fce[i]+=fce[i-1];
	}
	scanf("%lld", &M);
	F(M){
		scanf("%lld %lld", &A, &B);
		A=min(10000003LL, A);
		B=min(10000002LL, B);
		printf("%lld\n", fce[B]-fce[A-1]);
	}



	return 0;
}
