#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define pb2 pop_back
#define mp make_pair
#define REPP(i,l,r,c) for (int i=l;i<r;i+=c)
#define REP(i,l,r) REPP(i,l,r,1)
#define REPS(i,l,r) REP(i,l,r+1)
#define FOR(i,n) REP(i,0,n)
#define REPD(i,l,r) for (int i=r-1;i>=l;i--)
#define FORD(i,n) REPD(i,0,n)
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;

const int INF=(int)1E9;
const ll INFLL=(ll)1E15;
const ll MOD=(ll)1E9+7;
const double PI=acos(-1);
const double EPS=1E-9;

bool between(int x,int l,int r) {
	return (l<=x && x<=r);
}

string tostring(int x) {
	char dum[20]; sprintf(dum,"%d",x);
	string ret(dum); return ret;
}

const ll MAXN=10000010;

int n;
ll A[MAXN];
bool B[MAXN];
ll cnt[MAXN], ans[MAXN], lp[MAXN], idxp[MAXN];
vector<ll> prima;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	B[0]=B[1]=true; for (ll i=2;i*i<MAXN;i++) if (!B[i]) for (ll j=i*i;j<MAXN;j+=i) B[j]=true;
	int idxt=0; FOR(i,MAXN) if (!B[i]) prima.pb(i), idxp[i]=idxt++;
	cin>>n; FOR(i,n) cin>>A[i], cnt[A[i]]++;
	FOR(i,prima.size()) REPP(j,0,MAXN,prima[i]) ans[prima[i]]+=cnt[j];
	REP(i,1,MAXN) ans[i]+=ans[i-1], lp[i]=B[i]?lp[i-1]:i;
	int q; cin>>q; while (q--) {
		ll l,r; cin>>l>>r; l=min(l,MAXN-2); r=min(r,MAXN-2); ll a,b; a=lp[l]; b=lp[r]; if (!B[l]) a=(l==2)?0:prima[idxp[a]-1]; cout<<ans[b]-ans[a]<<endl;
	}
	return 0;
}
