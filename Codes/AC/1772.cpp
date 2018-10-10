#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define pob pop_back
#define mp make_pair
#define REPP(i,l,r,c) for (int i=l;i<r;i+=c)
#define REP(i,l,r) REPP(i,l,r,1)
#define REPS(i,l,r) REP(i,l,r+1)
#define FOR(i,n) REP(i,0,n)
#define REPD(i,l,r) for (int i=r-1;i>=l;i--)
#define FORD(i,n) REPD(i,0,n)
#define FOREACH(i,n) for (auto i:n)
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

void in(ll &number) {
    bool negative=false; register int c; number=0;
    c=getchar();
    if (c=='-') negative=true, c=getchar();
    for (;c>47&&c<58;c=getchar()) number=number*10+c-48;
    if (negative) number*=-1;
}

ll x,y,n;

inline ll cek(ll a) {
	ll ret=0;
	REPS(i,1,x) ret+=min((a-1)/i,y);
//	cout<<a<<" "<<ret<<endl;
	return ret;
}

int main() {
	in(x); in(y); in(n);
	ll l=1, r=x*y, mid;
	ll ans=0;
//	REPS(i,l,r) cek(i);
	while (l<=r) {
		mid=(l+r)/2;
		if (cek(mid)<n) l=mid+1, ans=max(ans,mid);
		else r=mid-1;
	}
	cout<<ans<<endl;
	return 0;
}
/*
1 2 3 4 5 6 7
2 4 6 8 10 12 14
3 6 9 12 15 18 21

1 2 2 3 3 4 4 5 6 6 6 7 8 9 10 12 12 14 15 18 21
*/
