#include<bits/stdc++.h>

#define pb push_back
#define ppb pop_back
#define mp make_pair
#define fi first
#define se second
#define Set(a, s) memset(a, s, sizeof (a))
#define sc(a) scanf("%c", &a)
#define si(a) scanf("%d", &a)
#define sii(a, b) scanf("%d%d", &a, &b)
#define siii(a, b, c) scanf("%d%d%d", &a, &b, &c)
#define sl(a) scanf("%I64d", &a)
#define sll(a, b) scanf("%I64d%I64d", &a, &b)
#define slll(a, b, c) scanf("%I64d%I64d%I64d", &a, &b, &c)
#define bye exit(0)


using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vll;
typedef vector<ii> vii;
typedef set<int> si;

const ll MOD = 1000000009LL;
const double PI = 3.14159265359;
const double eps = 1e-10;

ll add(ll x, ll y){
	return ( x+y+2*MOD )%MOD;
}

ll mult(ll x, ll y){
	return  (add(x, 0)*add(y, 0))%MOD;
}

ll fast_expo(ll x, ll y){
	if(x==0) return 0;
	if(y==0) return 1;

	ll res = 1;
	ll mid = fast_expo(x, y/2);
	if(y%2!=0) res = x;

	return mult(mult(mid, mid), res);
}

ll inver(ll x){
	return fast_expo(x, MOD-2);
}


ll gcd(ll e1, ll e2){
	if(e2==0) return e1;
	return gcd(e2, e1%e2);

}
///////////////////////PLANCHASO//////////////////////////////////////
const int TAM = 100000 + 10;

ll n, m, k;

ll f(ll t){
	ll res = 0;
	for(int i=1; i<=n; i++){
		res += min( m, t/i );
	}
	return res;
}

int main(){

	cin >> n >> m >> k;

	ll l = 1, h= n*m;	
	ll r;

	while( h-l>1 ){
		r = l + (h-l)/2;
		if( f(r) >= k ) h = r;
		else l = r;
	}

	if( f(l) >= k ) r = l;
	else r = h;

	cout << r << endl;


	return 0;
}
