#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define sc(n) scanf("%d",&n)
#define scl(n) scanf("%lld",&n)
#define p(n) printf("%d\n",n)
#define fi first
#define sec second
#define mp make_pair
#define pb push_back
#define INF 1LL*1e18
#define fio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
int a[1000005];
const int cmp = 10000001;
int sp[cmp+5];
int cnt[cmp+5];
ll ps[cmp+5];
void sieve()
{
	int i,j;
	for(i = 1;i <= cmp;i++){
		sp[i] = i;
	}
	for(i = 2;i*i <= cmp;i++){
		if(sp[i] != i) continue;
		for(j = i*i;j <= cmp;j += i)
			sp[j] = i;
	}
}
int main()
{
	fio;
	sieve();
	int i,j,k,l,m,n,t,r;
	int flag = 0;
	ll ans = 0,an = 0;
	t = 1;
	while(t--){
		sc(n);
		for(i = 0;i < n;i++){
			sc(a[i]);
		}
		for(i = 0;i < n;i++){
			while(a[i] > 1){
				k = sp[a[i]];
				while(!(a[i] % k)){
					a[i] /= k;
				}
				cnt[k]++;
			}
		}
		ps[1] = 0;
		for(i = 1;i <= cmp;i++){
			ps[i] = ps[i-1] + cnt[i];
		}
		sc(m);
		for(i = 0;i < m;i++){
			sc(l);sc(r);
			if(l >= cmp){
				puts("0");
				continue;
			}
			r = min(r,cmp);
			printf("%lld\n",ps[r] - ps[l-1]);
		}
	}
}
