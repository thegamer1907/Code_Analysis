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

string S;
ll A[3], P[3], C[3];
ll n;

bool cek(ll x) {
	ll ret=0;
	FOR(i,3) ret+=P[i]*max(C[i]*x-A[i],0ll);
	return ret<=n;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin>>S; FOR(i,3) cin>>A[i]; FOR(i,3) cin>>P[i]; cin>>n;
	FOR(i,S.size()) {
		if (S[i]=='B') C[0]++;
		if (S[i]=='S') C[1]++;
		if (S[i]=='C') C[2]++;
	}
	ll l=0ll, r=10000000000000ll, mid;
	ll ans=0;
	while (l<=r) {
		mid=(l+r)/2;
		if (cek(mid)) ans=max(ans,mid), l=mid+1;
		else r=mid-1;
	}
	cout<<ans<<endl;
	return 0;
}
