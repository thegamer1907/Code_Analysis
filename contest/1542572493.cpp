#include<iostream>
#include<algorithm>
#include<cassert>
using namespace std;

#define dbg(x) cout << #x << " " << x << endl;
#define fi(a,b) for(int i=a;i<b;++i)
#define fj(a,b) for(int j=a;j<b;++j)
#define fdi(a,b) for(int i=a-1;i>=b;--i)
#define fdj(a,b) for(int j=a-1;j>=b;--j)
#define mp make_pair
#define L first
#define R second
typedef long long ll;
typedef pair<int, int> pii;
///////////////////////

int const N = 1e5 + 123;
int const K = 22;
ll const INF = 1e18;
pii const EMP = mp(-1, -1);

ll ans;
ll d[K][N];
int p[K][N];
int S;
int cnt[N];
int a[N];
int n, k;

void checkcnt(){
	fi(0, N) assert(!cnt[i]);
}

pii getxor(pii a, pii b){
	int nl = min(a.R, b.R) + 1;
	int nr = max(a.L, b.L) - 1;
	if(nl > nr) return EMP;
	return mp(nl, nr);
}

ll pushline(int l, int r){
	ll ret = 0;
	fi(l, r+1){
		ret += cnt[a[i]];
		++cnt[a[i]];
	}
	return ret;
}

ll popline(int l, int r){
	ll ret = 0;
	fi(l, r+1){
		--cnt[a[i]];
		ret -= cnt[a[i]];
	}
	return ret;
}

ll moveto(int from, int to){
	if(from < to){
		return popline(from, to-1);
	}else{
		return pushline(to, from-1);
	}
}

ll moveto(pii from, pii to){
	if(from == to) return 0LL;
	if(from == EMP) return pushline(to.L, to.R);
	if(to == EMP) return popline(from.L, from.R);
	ll rl = 0;
	ll rr = 0;
	while(from.L < to.L){
		rl += popline(from.L, from.L);
		++from.L;
	}
	while(from.L > to.L){
		--from.L;
		rl += pushline(from.L, from.L);
	}
	while(from.R < to.R){
		++from.R;
		rr += pushline(from.R, from.R);
		
	}
	while(from.R > to.R){
		rr += popline(from.R, from.R);
		--from.R;
	}
	ll ret = rl + rr;
	return ret;
}

void rec(int tl, int tr, int bl, int br, ll cur){
	int tm = (tl+tr)/2;
	if(d[S][tm] > d[S-1][tm]){
		d[S][tm] = d[S-1][tm];
		p[S][tm] = p[S-1][tm];
	}
	pii bseg = getxor(mp(bl, br), mp(tl, tr));
	pii cseg = getxor(mp(bl, br), mp(tm + 1, tr));
	cur += moveto(bseg, cseg);

	fdi(min(tm, br) + 1, bl){
		cur += pushline(i, i);
		if(cur + d[S-1][i-1] < d[S][tm]){
			d[S][tm] = cur + d[S-1][i-1];
			p[S][tm] = i;
		}
	}

	fdi(min(tm, br) + 1, bl){
		cur += popline(i, i);
	}

	cur += moveto(cseg, bseg);
	if(tl != tr){
		pii lseg = getxor(mp(bl, p[S][tm]), mp(tl, tm));
		cur += moveto(bseg, lseg);
		rec(tl, tm, bl, p[S][tm], cur);
		cur += moveto(lseg, bseg);

		pii rseg = getxor(mp(p[S][tm], br), mp(tm+1, tr));
		cur += moveto(bseg, rseg);
		rec(tm+1, tr, p[S][tm], br, cur);
		cur += moveto(rseg, bseg);
	}

}

ll dp[K][N];
int q[N];
int bp[K][N];

ll brute(){
	fi(0, K) fj(i+1, N) dp[i][j] = INF;
	dp[0][0] = 0;
	fi(1, k+1){
		fj(1, n+1){
			for(int t=0;t<=n;++t) q[a[t]] = 0;
			ll cur = 0;
			for(int t=j;t>=1;--t){
				cur += q[a[t]];
				++q[a[t]];
				if(dp[i][j] > dp[i-1][t-1] + cur){
					dp[i][j] = dp[i-1][t-1] + cur;
					bp[i][j] = t;
				}
			}
		}
	}
	return dp[k][n];
}

void solve(){
#ifdef _DEBUG
	brute();
#endif
	fi(0, K) fj(0, N) d[i][j] = INF;
	d[0][0] = 0;
	fi(1, k+1){
#ifdef _DEBUG
		checkcnt();
#endif
		S = i;
		rec(1, n, 1, n, 0);
#ifdef _DEBUG
		checkcnt();
#endif
	}
	ans = d[k][n];
}

int main(){
#ifdef _DEBUG
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	scanf("%d %d",&n,&k);
	fi(1, n+1) scanf("%d",&a[i]);

	solve();

	printf("%lld\n",ans);

#ifdef _DEBUG
	brute();
	fi(1, k+1){
		fj(1, n+1){
			if(dp[i][j] != d[i][j]) printf("k = %d j = %d bv = %lld bp = %d as = %lld ap = %d\n",i,j,dp[i][j],bp[i][j],d[i][j],p[i][j]);
		}
	}
#endif

	return 0;
}