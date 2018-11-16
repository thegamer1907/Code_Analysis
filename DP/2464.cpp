#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ins insert
#define sb substr
#define sp fixed<<setprecision
#define bp __builtin_popcount
#define pll pair<ll,ll>
#define pld pair<ld,ld>
using namespace std;

ll A[100001][2],B[100001];

ll power(ll x, ll y);
ll mpower(ll x, ll y, ll p);
ll modInv(ll a, ll m);
ll gcdExtended(ll a, ll b, ll *x, ll *y);

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,i,j,k,l,p,q,r,x,y,z,a,b,c,d,f,n,m,M=1000000007;
	string s;
	vector<ll> v;
	vector<ll> :: iterator itrv;
	unordered_map<ll,ll> N;
	set<ll> S;
	set<ll> :: iterator itr;
    cin>>t>>k;
	A[0][0]=1;
	A[0][1]=0;
	B[0]=0;
	for(i=1;i<k;i++){
		A[i][0]=0;
		A[i][1]=1;
		B[i]=1;
	}
	for(i=k;i<100001;i++){
		A[i][0]=(A[i-k][0]+A[i-k][1])%M;
		A[i][1]=(A[i-1][0]+A[i-1][1])%M;
		B[i]=(A[i][0]+A[i][1])%M;
	}
	for(i=2;i<100001;i++){
		B[i]=(B[i]+B[i-1])%M;
	}
	while(t--){
		cin>>x>>y;
		cout<<((B[y]-B[x-1])%M+M)%M<<"\n";
	}
	return 0;
}

ll modInv(ll a, ll m){
	ll x, y;
	ll g = gcdExtended(a, m, &x, &y);
	ll res = (x%m + m) % m;
	return res;
}

ll gcdExtended(ll a, ll b, ll *x, ll *y){
	if (a == 0){
		*x = 0, *y = 1;
		return b;
	}
	ll x1, y1;
	ll gcd = gcdExtended(b%a, a, &x1, &y1);
	*x = y1 - (b/a) * x1;
	*y = x1;
	return gcd;
}

ll mpower(ll x, ll y, ll p){
	ll res = 1;
	x = x % p;
	while (y > 0)
	{
		if (y & 1){
			res = (res*x) % p;
		}
		y = y>>1;
		x = (x*x) % p;
	}
	return res;
}

ll power(ll x, ll y){
	ll res = 1;
	while (y > 0){
		if (y & 1)
			res = res*x;
		y = y>>1;
		x = x*x;
	}
	return res;
}
