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
	multiset<ll> S,S1;
	multiset<ll> :: iterator itr,itr2;
    cin>>n;
	for(i=0;i<n;i++){
		cin>>x;
		S.ins(x);
	}
	cin>>m;
	for(i=0;i<m;i++){
		cin>>x;
		S1.ins(x);
	}
	x=0;
	for(itr=S.begin();itr!=S.end();itr++){
		p=*itr-1;
		itr2=S1.find(p);
		if(itr2!=S1.end()){
			S1.erase(itr2);
			x++;
			continue;
		}
		p++;
		itr2=S1.find(p);
		if(itr2!=S1.end()){
			S1.erase(itr2);
			x++;
			continue;
		}
		p++;
		itr2=S1.find(p);
		if(itr2!=S1.end()){
			S1.erase(itr2);
			x++;
			continue;
		}
	}
	cout<<x<<endl;
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
