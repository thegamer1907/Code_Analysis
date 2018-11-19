#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define x first
#define y second
#define fi first
#define se second
#define sz(a) ((int)(a).size())
#define rep(i, a, b) for(ll (i) = (a); (i) < (b); (i)++)
#define dec(i, a, b) for (int (i) = (a); (i) >= (b); (i)--)
#define clr(a,v) memset(a, v, sizeof(a))
#define all(a) (a).begin(),(a).end()
#define LOGN 16
#define MAXN 303030
#define EPS 1e-9
#define fcin ios_base::sync_with_stdio(false)
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,ll> pii;
typedef vector<int> vi;

ld h, m, s, t1, t2;

bool testa(ld v){ return v < min(t1,t2) || v > max(t1,t2); }

int32_t main(){
	cin >> h >> m >> s >> t1 >> t2;
	m = 12*m/60;
	s = 12*s/60;
	if(s) m += 0.0001;
	if(m) h += 0.0001;
	if(testa(s) && testa(m) && testa(h)){ puts("YES"); return 0; }
	if(t1 > t2) swap(t1,t2);
	if(t1 < s && t1 < m && t1 < h && t2 > s && t2 > m && t2 > h) puts("YES");
	else puts("NO");
}


