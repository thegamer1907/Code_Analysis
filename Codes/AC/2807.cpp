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

const ull BASE=31;

string S,S2;
vector<int> ans, ans2;
int n;
int sama;

inline bool cek(int x) {
	if (1+ans[x]>=S.size()) return false;
	ull awal=0;
	FOR(i,ans[x]) awal*=BASE, awal+=(S[i]-'a');
	ull cur=0, pangkat=1;
	REPS(i,1,ans[x]) cur*=BASE, cur+=(S[i]-'a'), pangkat*=BASE;
	if (cur==awal) return true;
	REP(i,ans[x]+1,S.size()-1) {
		cur*=BASE; cur-=(S[i-ans[x]]-'a')*pangkat; cur+=(S[i]-'a');
		if (cur==awal) return true;
	}
	return false;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin>>S; n=S.size();
	ull kiri,kanan; kiri=kanan=0; ull cur=1;
	FOR(i,n-1) {
		kiri*=BASE; kiri+=(S[i]-'a');
		kanan+=(S[n-i-1]-'a')*cur; cur*=BASE;
		if (kiri==kanan) ans.pb(i+1);
	}
	if (ans.empty()) {
		cout<<"Just a legend"<<endl; return 0;
	}
	int l=0, r=ans.size()-1, asd=-INF, mid;
	while (l<=r) {
		mid=(l+r)/2;
		if (cek(mid)) asd=max(asd,mid), l=mid+1;
		else r=mid-1;
	}
	if (asd==-INF) {
		cout<<"Just a legend"<<endl; return 0;
	}
	string temp=""; FOR(i,ans[asd]) temp+=S[i];
	cout<<temp<<endl;
	return 0;
}
/*
aaaaaaaaaabbbbbaaaaa
aaaaabbbbbaaaaaaaaaa
aaaaaabbbbbbbbbbaaaa
aaaaaaaaa
aaaaaaaa
*/
