#include <bits/stdc++.h>
#define ll long long
#define lld long double
#define mod 1000000007
#define rep(i,n)	for(ll i=0;i<n;++i)
#define forup(i,a,b) for(ll i=a;i<=b;++i)
#define all(v)	v.begin(),v.end()
#define inf 1000000010
#define pii pair<ll,ll>
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define MAXN 110
#define bsize 555
#define sz(v) v.size()
#define fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
ll power(ll x,ll y, ll md){ll res = 1;x%=md;while(y>0){if(y&1)res = (res*x)%md;x = (x*x)%md;y = y>>1;}return res%md;}

int main(){
	ll n;
	cin>>n;
	std::vector<ll> v(n+1,0);
	rep(i,n)	cin>>v[i+1];
	std::vector<ll> ans(n+1);
	rep(i,n){
		ans[v[i+1]] = i+1;
	}
	rep(i,n)	cout<<ans[i+1]<<" ";
}