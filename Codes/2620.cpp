// Template by [thunder_blade]
// IIIT ALLAHABAD
// includes :)

#include<bits/stdc++.h>
using namespace std;
#define TEST  int test_case; cin>>test_case; while(test_case--)
#define all(v) (v).begin(),(v).end()
#define fi  first
#define se  second
#define pb push_back
#define mp make_pair
#define ll long long int
#define SPEED ios_base::sync_with_stdio(false);  cin.tie(0);  cout.tie(0);
#define pi(x) printf("%d\n",x)
#define pl(x) printf("%lld\n",x)
#define pf(x) printf("%f\n",x)
#define ps(x) printf("%s\n",x)
#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define sf(x) scanf("%f",&x)
#define ss(x) scanf("%s",x)
#define pis(x) printf("%d ",x)
#define pls(x) printf("%lld ",x)
#define pfs(x) printf("%f ",x)
#define pss(x) printf("%s ",x)
#define FOR(i,a,b) for(i=a;i<b;i++)
#define mod 1000000007

const int MAXN = 10000002;
bool prime[MAXN];
int A[MAXN];
int P[MAXN];
int main() {
	int n,i;
	si(n);
	FOR(i,0,n) {
		int x;
		si(x);
		A[x]++;
	}
	/*for(int i = 2; i < MAXN; i += 2) P[2] += A[i];

	for(int i = 3; i < MAXN; i += 2) {
		P[i] += P[i-1];
		if(!prime[i]) {
			for(int j = i; j <= MAXN; j += i) {
				P[i] += A[j];
				prime[j] = 1;
			}
		}
		P[i+1] = P[i];
	}*/

	for(int i=2;i<MAXN;i++){
		//P[i]+=P[i-1];
		if(!prime[i]){
			for(int j=i;j<=MAXN;j+=i){
				P[i] += A[j];
				prime[j]=1;
			}
		}
		//P[i+1] = P[i];
	}
	for(int i=1;i<=MAXN;i++)
		P[i] += P[i-1];
	int m;
	si(m);
	while(m--) {
		int l,r;
		si(l);si(r);
		l = min(l, 10000000);
		r = min(r, 10000000);
		printf("%d\n",P[r]-P[l-1]);
	}
	return 0;
}