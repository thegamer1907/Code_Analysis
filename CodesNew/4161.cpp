#include <bits/stdc++.h>
using namespace std;

#define FILE_IN freopen("kotlin.in", "r", stdin);
#define FILE_OUT freopen("kotlin.out", "w", stdout);

#define fr(i,n) for(int i=0;i<n;i++)
#define frr(i,a,b) for(int i =a;i<=b;i++)
// for(auto it : g[i].nb)

typedef long long ll;
typedef long double ld;

#define pb push_back

#define all(a) a.begin(),a.end() 

#define fi first
#define se second
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const long double PI = acos(-1.0l);
const ll MOD = 1e9+7;

//LLONG_MAX
//-DBL_MAX

bool debug = 0;
#define printa(a) cout << #a << " = " << (a) << endl
#define prin(a) if(debug) cout << #a << " = " << (a) << endl
#define soprin(a) if(debug) cout << (a)
#define ppal(a)  if(debug) cout << #a << endl
#define prinsep if(debug) cout << "------" << endl
#define cendl if(debug) cout << endl
#define prinpar(p) if(debug) cout << #p << ".fi=" << (p).fi << " " << #p << ".se=" << (p).se << endl
#define print(tup) if(debug) cout << #tup << " = {" << get(tup,0) << ", " << get(tup,1) << ", " << get(tup,2) << "}\n"
#define prinv(v) if(debug){ cout << #v << ":" << endl; for(auto it = (v).begin(); it!=(v).end();it++){ cout << *it << " ";} cout << endl;}

const int N = 2e5+10;

ll v[N];
vector<ll> ac;

int main(){
	//FILE_IN FILE_OUT
	int n, q;
	scanf("%d%d", &n, &q);
	
	fr(i,n){
		scanf("%lld", v+i);
		ac.pb(0);
		ac[i] = v[i];
		if(i) ac[i]+=ac[i-1];
	}
	
	ll curdano = 0;
	int idw = 0;
	
	fr(iq,q){
		ll x;
		scanf("%lld", &x);
		curdano+=x;
		
		
		idw = (upper_bound(all(ac),curdano)-ac.begin());
		if(idw==n) idw = 0, curdano = 0;
		printf("%d%c", n-idw, "\n"[iq==-1]);
		cendl;
		prin(curdano);
		prin(idw);
		cendl;
		cendl;
	}
	
	return 0;
}

