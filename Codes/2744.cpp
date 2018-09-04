//long time no ac
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int ,int> pii;
typedef pair<ll ,ll> pll;
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(X) (X).begin(), (X).end()
#define sll(n) scanf("%lld",&n)
#define sll2(x,y) scanf("%lld%lld",&x,&y)
#define sll3(x,y,z) scanf("%lld%lld%lld",&x,&y,&z)
#define REP(i,x,y) for(ll i = x;i <= y;++i)
#define debug(x) cerr<<#x<<"::"<<x<<endl
#define debug2(x,y) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n"
#define debug3(x,y,z) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n"
#define debug4(x,y,z,w) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\t"<<#w<<" :: "<<w<<"\n"
ll power(ll x,ll y,ll z) {
	ll ret = 1;
	while(y > 0) {
		if(y & 1) ret = (ret*x)%z;
		x = (x*x)%z;
		y >>= 1;
	}
	return ret;
}
const ll N = 1e6+5,MOD = 1e9+7;
ll Z[N];
// Z array stores length of the longest substring starting 
// from str[i] which is also a prefix of str[0..n-1]
void build_Z(string s) {
	ll l = 0,r = 0,k,n = s.size();
	REP(i,1,n-1) {
		if(i > r) {
			l = i,r = i;
			while(r < n && s[r-l] == s[r]) ++r;
			Z[i] = r-l;
			--r;
		}
		else {
			k = i-l;
			if(Z[k] < r - i + 1) Z[i] = Z[k];
			else {
				l = i;
				while(r < n && s[r-l] == s[r]) ++r;
				Z[i] = r-l;
				--r;
			}
		}
	}
	return;
}
ll has[N];
int main() {
	
	string s,aux = "Just a legend";
	cin >> s;
	build_Z(s);
	ll n = s.size();
	if(n <= 2) cout << aux << "\n";
	else {
		string ans = "";
		ll len = 0;
		REP(i,1,n-1) has[i] = max(has[i-1],Z[i]);
		for(ll i = 2;i < n;++i) {
			if(i+Z[i] == n && has[i-1] >= Z[i]) {
				if(Z[i] > len) {
					len = Z[i];
					ans = s.substr(i,Z[i]);
					break;
				}
			}
		}
		if(!len) ans = aux;
		cout << ans << "\n";
	}


	return 0;
}