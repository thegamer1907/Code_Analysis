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

const int N = 500 + 2;
const ll MOD = 1e9 + 7;
const int oo = 1e9;

ll rec[3], n[3], p[3];

bool ok(ll mid, ll r){
	ll b = mid * rec[0] - n[0], s = mid * rec[1] - n[1], c = mid * rec[2] - n[2];
//	trace3(b,s,c);
	b = max(b,0ll); s = max(s, 0ll); c = max(c, 0ll);
	ll tot = b * p[0] + s *p[1] + c * p[2];
	return (tot <= r);
}

int main(){
	fastio;
	string s; cin >> s;
	REP(i,0,sz(s)){
		if(s[i] == 'B') rec[0] ++;
		else if(s[i] == 'S') rec[1] ++;
		else rec[2] ++;
	}
	REP(i,0,3) cin >> n[i];
	REP(i,0,3) cin >> p[i];
	ll r; cin >> r;
	ll low = 0, high = 1e13;
	REP(i,0,100){
		ll mid = (low + high) >> 1;
		if(ok(mid,r)) low = mid;
		else high = mid -1;
	}
	//ll extra = min(n[0]/rec[0], min(n[1]/rec[1], n[2]/rec[2]));
//	trace2(low, high);
//	cout << ok(2e11 + 1, r) << endl;
	if(ok(high,r)) cout << high<< endl;
	else cout << low << endl;
	return 0;
}
