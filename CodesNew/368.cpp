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
const double INFD=1E9;
const ll INFLL=(ll)1E15;
const ll MOD=(ll)1E9+7;
const long double PI=acos(-1);
const long double EPS=1E-9;

bool between(int x,int l,int r) {
	return (l<=x && x<=r);
}

string tostring(int x) {
	char dum[20]; sprintf(dum,"%d",x);
	string ret(dum); return ret;
}

inline void work(int kasus) {
	
//	printf("Case #%d:",kasus);
}

int n,m;
int A[100010];

int main() {
//	int kasus; scanf("%d",&kasus); REPS(ik,1,kasus) work(ik);
	scanf("%d%d",&n,&m); FOR(i,n) scanf("%d",A+i);
	int ans=0; int idx=0; int cur=0;
	FOR(i,n) {
		while (cur<=m && idx<n) {
			cur+=A[idx]; idx++;
			if (cur>m) break;
			ans=max(ans,idx-i);
		}
		cur-=A[i];
	}
	printf("%d\n",ans);
	return 0;
}
