#include<bits/stdc++.h>
#define all(v) (v).begin(),(v).end()
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ri(x) scanf("%d",&(x))
#define ri2(x,y) scanf("%d %d",&(x),&(y))
#define ri3(x,y,z) scanf("%d %d %d",&(x),&(y),&(z))
#define rll(x) scanf("%lld",&(x))
#define rll2(x,y) scanf("%lld %lld",&(x),&(y))
#define rll3(x,y,z) scanf("%lld %lld %lld",&(x),&(y),&(z))
#define rc(x) scanf("%c",&(x))
using namespace::std;

const long double PI = acos(-1);
const int MOD = 1000000000 +7;

typedef long long ll;
typedef pair<ll,ll> pll;
typedef pair<ll,pll> tll;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<tll> vtll;
typedef vector<string> vs;
typedef set<int> si;
typedef set<ii> sii;
typedef set<iii> siii;

ll gcd(ll a, ll b){ return b==0?a:gcd(b,a%b);}

int add(ll a, ll b){ return (a%MOD + b%MOD+2*MOD)%MOD;}

int mul(ll a, ll b){ return ((a%MOD+MOD)*(b%MOD+MOD))%MOD;}

ll pow_mod(ll a, ll b){
	ll res = 1LL;
	a = add(a,0);
	while(b){
		if(b&1) res = mul(res,a);
		b >>= 1;
		a = mul(a,a);
	}
	return res;
}

ll fastexp(ll a, ll b){
	ll res = 1LL;
	while(b){
		if(b&1) res = res*a;
		b >>= 1;
		a *= a;
	}
	return res;
}

int gcdExtendido(int a, int b, int *x, int *y){
	if(a == 0){
		*x = 0;
		*y = 1;
		return b;
	}
	int x1, y1;
	int gcd = gcdExtendido(b%a,a,&x1,&y1);
	
	*x = y1-(b/a)*x1;
	*y = x1;
	return gcd;
};

int modInverso(int a, int m){
	int x, y;
	int g = gcdExtendido(a,m,&x,&y);
	if(g!=1) return -1;
	else return (x%m + m)%m;
}

/****************************************
*************P*L*A*N*T*I*L*L*A************
*****************************************/

string s;
ll money;
int v[4];
int p[4];
int q[4];

bool can(ll x){
	ll B = 1LL*q[0]*x*p[0];
	ll S = 1LL*q[1]*x*p[1];
	ll C = 1LL*q[2]*x*p[2];
	B -= v[0]*p[0];
	S -= v[1]*p[1];
	C -= v[2]*p[2];
	B = max(B,0LL);
	S = max(S,0LL);
	C = max(C,0LL);
	return B+C+S<=money;
}

int main(){
	cin >> s;
	for(int i=0; i<s.size(); i++){
		if(s[i]=='B') q[0]+=1;
		if(s[i] == 'S') q[1] +=1;
		if(s[i] == 'C') q[2]+=1;
	}
	for(int i=0; i<3; i++){
		ri(v[i]);
	}
	for(int i=0; i<3; i++){
		ri(p[i]);	
	}
	cin >> money;
	int valueperone = 0;
	for(int i=0; i<3; i++) valueperone += q[i]*p[i];
	ll lo = 0, hi = 1000000000100LL;
	while(lo < hi){
		ll mi = lo + (hi-lo+1)/2;
		if(can(mi)) lo = mi;
		else hi = mi-1;
	}
	cout << lo << endl;
	return 0;
}
