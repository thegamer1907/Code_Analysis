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

ll gcd(ll a, ll b)
{
	if(a==0) return b;
	return gcd(b%a,  a);
}
ll n;
ll d[200005];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>d[i];
	}
	ll ans = 0,tmpl=0,tmpr=0;
	ll i=0,j=n+1;
	while(i<j){
		//cout<<i<<" "<<j<<endl;
		if(tmpl == tmpr)
		{
			ans = max(tmpl,ans);
			i++;
			tmpl += d[i];
		}
		else if(tmpl < tmpr){
                i++;
			tmpl += d[i];

		}
		else{
		    j--;
			tmpr += d[j];
		}
	}
	cout<<ans<<endl;
	return 0;
}
