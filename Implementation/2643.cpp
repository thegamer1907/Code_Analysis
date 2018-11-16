#include<bits/stdc++.h>

#define pb push_back
#define ppb pop_back
#define mp make_pair
#define fi first
#define se second

#define Set(a, s) memset(a, s, sizeof (a))
#define sz(x) (int((x.size())))
#define all(x) (x).begin(),(x).end()

#define db(x)		 cerr << #x << " = " << x << endl
#define db2(x, y)	{cerr << #x << " = " << x << "\t";	db(y);}
#define db3(x, y, z){cerr << #x << " = " << x << "\t";	db2(y,z);}

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

const ll CMOD = 998244353LL;
const double PI = 3.14159265359;
const double eps = 1e-7;

ll add(ll x, ll y, ll MOD = CMOD){
	return ( x+y+2*MOD )%MOD;
}

ll mult(ll x, ll y, ll MOD = CMOD){
	return  (add(x, 0)*add(y, 0))%MOD;
}

ll fast_expo(ll x, ll y, ll MOD = CMOD){
	if(x==0) return 0;
	if(y==0) return 1;

	ll res = 1;
	ll mid = fast_expo(x, y/2, MOD);
	if(y%2!=0) res = x;

	return mult(mult(mid, mid, MOD), res, MOD);
}

ll inver(ll x, ll MOD = CMOD){
	return fast_expo(x, MOD-2);
}


ll gcd(ll e1, ll e2){
	if(e2==0) return e1;
	return gcd(e2, e1%e2);

}
///////////////////////PLANCHASO//////////////////////////////////////
const int TAM = 1000 + 10;

int a, b, c;

//a+b+c
//a*(b+c)
//(a+b)*c
//a*b*c

int main(){

	cin >> a >> b >> c;

	cout << max(max(a+b+c, a*(b+c)), max((a+b)*c, a*b*c)) << endl;

	return 0;
}
