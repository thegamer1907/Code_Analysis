#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define MOD 1000000007
#define mp make_pair
#define fi first
#define se second
#define ms(s, n) memset(s,n,sizeof(s))
#define FOR(i, a, b) for (ll i = (a); i < (b); i++)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); i--)

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vl;
typedef pair<ll,ll> pl;

ll fpow(ll n,ll k,ll p = MOD){ll r=1;for(;k;k>>=1){if(k&1)r=r*n%p;n=n*n%p;}return r;}
ll inv(ll a,ll p=MOD){return fpow(a,p-2,p);}
ll power(ll x,ll y){if (y==0)return 1;else if (y%2==0)return power(x,y/2)*power(x,y/2);else return x*power(x,y/2)*power(x,y/2);}  
ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b; b=r;} return a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
int main()
{
	ll n,m,k;
	cin>>n>>m>>k;
	ll a[m];
	FOR(i,0,m)cin>>a[i];
	ll so_far = 0;
	ll cur = k, ans = 0, i = 0;
	while(i<m)
	{
		bool flag = 0;
		while(a[i]<=cur){
			i++;
			so_far++;
			flag = 1;
			if(i == m)
				break;
		}
		if(flag){
			// cout<<a[i-1]<<" "<<cur<<endl;
			cur = ((a[i] - so_far - 1)/k + 1) * k + so_far;
			ans++;
		}
		else{
			cur = cur + ((a[i] - cur)/k + 1)*k;
		}
	}
	cout<<ans;
	return 0;
}