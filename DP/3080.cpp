
#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
#define repA(i, a, n) for(int i = a; i <= (n); ++i)
#define repD(i, a, n) for(int i = a; i >= (n); --i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int) (x).size()
#define fill(a) memset(a, 0, sizeof(a))
#define fst first
#define snd second
#define mp make_pair
#define pb push_back

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
ll INF = INT_MAX;

int main(){
	cin.sync_with_stdio(0); cin.tie(0);
    cin.exceptions(cin.failbit);
	int n; cin >> n;
	ll s[n]; rep(i,n) cin >> s[i];
	ll c[n]; rep(i,n) cin >> c[i];
	ll b[n]; rep(i,n) b[i] = INF;
	rep(i,n) rep(j,i) if(s[i] > s[j]) b[i] = min(c[j],b[i]);
	ll minm = INF;
	rep(i,n){
		rep(j,i){
			if(s[i] > s[j]) minm = min(minm, b[j] + c[j] + c[i]);
		}
	}
	if(minm == INF) cout << -1 << endl;
	else cout << minm << endl;
	return 0;
}
