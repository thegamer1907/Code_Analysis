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

int a[100005][5];
int main() {
	ios::sync_with_stdio(0);
	INN(n, k);
	set<int> s[5];
	bool x[4]={false};
	int cnt;
	F(n) {
		cnt=0;
		FF(k) {
			cin>>a[i][j];
			if(!a[i][j]) {
				cnt++;
				x[j]=true;
			}
		}
		s[cnt].insert(i);
	}
	if(k==1) {
		cout<<(s[1].empty() ? "NO":"YES");
		return 0;
	}
	if(k==3) {
		if(s[3].empty()) {
			if(s[2].empty()) {cout<<"NO"; return 0;}
			if(x[0]&&x[1]&&x[2]) {cout<<"YES"; return 0;}
			cout<<"NO"; return 0;
		}
		cout<<"YES"; return 0;
	}
	if(k==2) {
		bool ans = false;
		if(x[0]&&x[1]) ans = true;
		else ans = false;
		cout<<(ans ? "YES":"NO")<<endl;
		return 0;
	}
	bool tb[4][4] = {{false}};
	if(k==4) {
		bool ans = false;
		if(!s[4].empty()) ans = true;
		else if(!s[3].empty()) {
			if(x[0]&&x[1]&&x[2]&&x[3]) ans = true;
			else ans = false;
		}
		else if(s[2].empty()) ans = false;
		else {
			while(!s[2].empty()) {
				auto pp = s[2].begin();
				int p = *pp;
				//cout<<p<<endl;
				s[2].erase(p);
				int j=0;
				while(a[p][j]!=1) j++;
				int l = j;
				j++;
				while(a[p][j]!=1) j++;
				int m = j;
				//cout<<l<<' '<<m<<endl;
				if(tb[l][m]) {ans = true; break;}
				j=0;
				while(a[p][j]!=0) j++;
				l = j;
				j++;
				while(a[p][j]!=0) j++;
				m = j;
				//cout<<l<<' '<<m<<endl;
				tb[l][m] = true;
				tb[m][l] = true;
			}
		}
		cout<<(ans ? "YES":"NO")<<endl;
	}
	F(5) s[i].clear();
	return 0;
}
