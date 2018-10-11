#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
#define trace(x) cerr << #x << ": " << x << '\n'
#define trace2(x,y) cerr << #x << ": " << x << " | " << #y << ": " << y << '\n';
#define trace3(x,y,z) cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << '\n';
#define all(v) (v).begin(),(v).end()
#define pb push_back
#define sz(v) ((int)v.size())
#define clr(v,x) memset(v, x, sizeof(v))
#define REP(i,x,y) for(int (i)=(x);(i)<(y);(i)++)
#define RREP(i,x,y) for(int (i)=(x);(i)>=(y);(i)--)
#define mp make_pair
#define mt(x,y,z) make_pair(mp(x,y),z)
#define fst first
#define snd second
typedef long long ll;
typedef pair<ll,ll> ii;
typedef long double ld;
typedef pair<ii, ll> tri;
#define itm1 fst.fst
#define itm2 fst.snd
#define itm3 snd

const int N = 1e7 + 1;
const ll MOD = 1e9 + 7;
const int oo = 1e9;

int is[N], sp[N];
vector<int> pr;
int mark = 0;
map<int, int> id;
ll cnt[670000], vis[670000];
ll dp[670000];

void pre(){
	for(int i = 2; i <= N; i ++){
		if(!is[i]){
			pr.pb(i); sp[i] = i;
			id[i] = mark; mark ++;
			for(int j = 2 * i; j <= N; j += i){
				is[j] = 1;
				if(sp[j] == 0) sp[j] = i;
			}
		}
	}
	
}

int main(){
	fastio;
	pre();
	int n; cin >> n;
	REP(i,1,n+1){
		int x; cin >> x;
		while(x != 1){
			int p = sp[x];
		//	trace2(x,p);
			int m = id[p];
			if(vis[m] != i){
				vis[m] = i; cnt[m] ++;
			}
			x /= p;
		}
	}
	REP(i,0,670000){
		if(i == 0) dp[i] = cnt[i];
		else dp[i] = dp[i-1] + cnt[i];
	}
	int m; cin >> m;
	REP(i,0,m){
		int a,b; cin >> a >> b;
		int p = lower_bound(all(pr), a) - pr.begin();
		int q = upper_bound(all(pr), b) - pr.begin();
		q--;
		if(p > q){
			cout << 0 << endl;
			continue;
		}
		ll ans;
		if(p == 0) ans = dp[q];
		else ans = dp[q] - dp[p-1];
		cout << ans << endl;
	}
	return 0;
}
