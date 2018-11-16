#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("avx")
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

void in(int &number) {
    bool negative=false; register int c; number=0;
    c=getchar();
    if (c=='-') negative=true, c=getchar();
    for (;c>47&&c<58;c=getchar()) number=number*10+c-48;
    if (negative) number*=-1;
}

int n,m;
int A[100010];
set<int> S;
int suf[100010];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin>>n>>m; FOR(i,n) cin>>A[i];
	FORD(i,n) {
		S.insert(A[i]);
		suf[i]=S.size();
	}
	FOR(i,m) {
		int x; cin>>x; x--; cout<<suf[x]<<endl;
	}
	return 0;
}
