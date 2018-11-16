#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
#define ms(a, n) memset(a,n,sizeof(a)) 
#define pb push_back
#define sz(a) a.length()
#define mp make_pair
#define fi first
#define se second
#define prec(n) fixed<<setprecision(n)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define FORD(i,a,b) for(int i=(a)-1;i>=(b);i--)
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
const int MOD=(int)1e9+7;
const int N=1e6+5;
bool pr[1000007];
void sieve(){pr[0]=1;pr[1]=1;for(int i=2;i<sqrt(1000007);i++){for(int j=2*i;j<=1000007;j+=i){pr[j]=1;}}}
ull ipow(ull base,int exp){ull res=1ULL;while(exp){if(exp&1){res*=(ull)base;}exp>>=1;base*=base;}return res;}
ll fpow(ll x,ll y,ll p){ll res=1;while(y){if(y&1)res=res*x;res%=p;y=y>>1;x=x*x;x%=p;}return res;}
ll inv(ll a,ll p=MOD){return fpow(a,p-2,p);}
ll lcm(ll a,ll b){return a/__gcd(a,b)*b;}

int main()
{	
	int k2,k3,k5,k6;
	cin>>k2>>k3>>k5>>k6;
	ll a=min(min(k2,k5),k6);
	k2-=a;k5-=a;k6-=a;
	ll b=min(k3,k2);
	k3-=b;k2-=b;
	ll ans=a*256;
	ans+=b*32;
	cout<<ans;
}
