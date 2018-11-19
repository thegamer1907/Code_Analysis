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
typedef unsigned long long ull;
typedef long double LD;

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	int n;
	char c[105][3];
	cin>>c[0];
	cin>>n;
	bool ans = false, x=false, y=false;
	FI(n) {
		cin>>c[i];
		if(c[0][1]==c[i][1] && c[0][0] == c[i][0]) ans=true;
		if(c[0][0] == c[i][1]) x= true;
		if(c[0][1] == c[i][0]) y= true;
	}
	if(ans || (x&&y)) cout<<"YES";
	else cout<<"NO"<<endl;
	return 0;
}
