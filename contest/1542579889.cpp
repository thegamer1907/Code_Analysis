#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define x first
#define y second
#define sz(a) ((int)(a).size())
#define rep(i, a, b) for(int (i) = (a); (i) < (b); (i)++)
#define dec(i, a, b) for (int (i) = (a); (i) >= (b); (i)--)
#define clr(a,v) memset(a, v, sizeof(a))
#define all(a) (a).begin(),(a).end()
#define LOGN 16
#define MAXN 101010
#define EPS 1e-9
#define fcin ios_base::sync_with_stdio(false)
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,ll> pii;
typedef vector<int> vi;

ll pd[22][MAXN], INF = 1e18, qt[MAXN], cc;
int n, k, vet[MAXN], pl=1, pr;

void add(int v){
	cc -= qt[v]*(qt[v]-1)/2;
	qt[v]++;
	cc += qt[v]*(qt[v]-1)/2;
}

void rm(int v){
	cc -= qt[v]*(qt[v]-1)/2;
	qt[v]--;
	cc += qt[v]*(qt[v]-1)/2;
}

void solve(int i, int l, int r, int kl, int kr){
	if(l > r) return;
	int mid = (l+r)>>1, opt = -1;
	pd[i][mid] = INF;
	rep(j,kl,min(kr+1, mid)){
		while(pr < mid) add(vet[++pr]);
		while(pr > mid) rm(vet[pr--]);
		while(pl < j+1) rm(vet[pl++]);
		while(pl > j+1) add(vet[--pl]);
		if(pd[i][mid] > pd[i-1][j] + cc){
			pd[i][mid] = pd[i-1][j] + cc;
			opt = j;
		}
	}
	solve(i, l, mid-1, kl, opt);
	solve(i, mid+1, r, opt, kr);
}


int32_t main(){
	scanf("%d%d", &n, &k);
	rep(i,1,n+1) scanf("%d", vet+i);
	
	rep(i,1,n+1) pd[0][i] = INF;
	pd[0][0] = 0;
	rep(i,1,k+1){
		pd[i][0] = 0;
		solve(i, 1, n, 0, n-1);
	}
	printf("%lld\n", pd[k][n]);
}


