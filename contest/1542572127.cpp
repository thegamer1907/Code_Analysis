#include<bits/stdc++.h>
#include<vector>

#define pb push_back
#define rep(i, a, n) for(int (i)=a; (i)<(n); (i)++)
#define FOR(i, n) rep(i, 0, n)
#define F(n) FOR(i, n)
#define FF(n) FOR(j, n)
#define repi(i, a, n) for(int (i)=a; (i)<=(n); (i)++)
#define FORI(i, n) repi(i, 1, n)
#define FI(n) FORI(i, n)
#define FFI(n) FORI(j, n)
#define IN(x) int x; cin>>(x);
#define INN(x, y) int x, y; cin>>(x)>>(y);
#define INFO(a) cout<<"info "<<a<<endl
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define vpii vector<pair<int, int> >
#define sortv(x) sort((x).begin(), (x).end())
#define sortvd(x) sort((x).begin(), (x).end(), greater<int>())
#define lboundv(x,v) lower_bound((x).begin(),(x).end(),(v))-(x).begin();
#define uboundv(x,v) upper_bound((x).begin(),(x).end(),(v))-(x).begin();
#define ite iterator
#define fi first
#define se second
#define mems(a, v) memset((a), (v), sizeof((a)))
#define lmid(l, r) ((l)+(r)-1)/2
#define rmid(l, r) ((l)+(r))/2+1
#define mp make_pair

typedef long long ll;
typedef long double LD;

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	double h, m, s, t1, t2;
	cin>>h>>m>>s>>t1>>t2;
	m/=5;
	s/=5;
	if(h==12.0) h=0;
	if(m==12.0) m=0;
	if(s==12.0) s=0;
	if(t1==12.0) t1=0;
	if(t2==12.0) t2=0;
	bool ans = false;
	if(t1>t2) swap(t1, t2);
	//cout<<' '<<h<<' '<<m<<' '<<s<<' '<<t1<<' '<<t2<<endl;
	if(t1<=h && h<t2)
		if(t1<=m && m<t2)
			if(t1<=s && s<t2)
				ans = true;
	//cout<<ans<<endl;
	if((t2<=h && h<12) || (0<=h && h<t1))
		if((t2<=m && m<12) || (0<=m && m<t1))
			if((t2<=s && s<12) || (0<=s && s<t1))
				ans = true;
	cout<<(ans ? "YES":"NO")<<endl;
	return 0;
}
