#include<bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;
const int N = 1e5 + 5;

#define ll long long
#define pb push_back
#define fi first
#define se second
#define mp make_pair

inline ll power(ll a, ll b){
	ll x = 1;
	a = a%mod;
	while(b){
		if(b & 1) x = (x*a)%mod;
		a = (a*a)%mod;
		b >>= 1;
	}
	return x;
}
inline ll inv(ll a){ return power(a, mod-2);}
ll gcd(ll a, ll b){ return a?gcd(b%a,a):b;}

ll a[N],n;

int main()
{
	// ios_base::sync_with_stdio(false);
	cin>>n;
	ll minn = LLONG_MAX;
	for(int i=0;i<n;i++){
		cin>>a[i];
		minn = min(minn,a[i]);
	}	
	ll ans = minn;
	ll pos = (minn)%n;
	while(a[pos%n]-ans >0){
		ans++;
		pos++;
	}
	pos = pos%n;
	cout<<pos+1<<endl;
	
	return 0;
}