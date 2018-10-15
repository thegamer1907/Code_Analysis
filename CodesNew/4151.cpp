#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int>pii;
typedef pair<ll,ll>pll;
typedef pair<double,double>pdd;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef set<int> si;
typedef vector<ll>vl;

#define pb push_back
#define FOR(i, a, b) for (ll i=a; i<(b); i++)
#define FOR1(i, a) for (ll i=0; i<(a); i++)
#define FORr(i,a,b) for (ll i = (b)-1; i >= a; i--)
#define FOR1r(i,a) for (ll i = (a)-1; i >= 0; i--)
#define all(x) x.begin(),x.end()
#define ms(a,v) memset(a,v,sizeof a)
#define EPS 1e-10
#define pi 3.1415926535897932384626433832795

ll dp[200003];
int main(){
	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);
	ll n,q;cin>>n>>q;
	ll a[n];
	FOR(i,0,n) cin>>a[i];
	ll dp[n],rem=a[0],s=0;
	dp[0]=a[0];
	FOR(i,1,n) {
		dp[i]=dp[i-1]+a[i];
		// cout<<dp[i]<<" ";
	}
	// cout<<endl;

	FOR(i,0,q){
		ll k;cin>>k;
		// cout<<"rem "<<rem<<" k "<<k<<endl;
		if(rem>k){
			rem-=k;
			// cout<<"hello\n";
		}
		else{
			k-=rem;
			// cout<<"dp[s]+k "<<dp[s]+k<<endl;
			ll * pos = upper_bound(dp, dp+n, dp[s]+k);
			// cout<<"pos "<<pos-dp<<endl;
			if(pos-dp == n){
				s=0;
				rem=a[0];
				
			}
			else{
				k-=dp[pos-dp-1]-dp[s];
				rem=a[pos-dp]-k;
				s=pos-dp;
			}
		}
		cout<<n-s<<endl;
	}
}














