#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
#define pii pair<ll,ll>
#define vpii vector<pair<ll,ll> >
#define F first
#define S second
#define ld long double
#define built __builtin_popcountll
//assic value of ('0'-'9') is(48 - 57) and (a-z) is (97-122) and (A-Z) is(65-90) and 32 for space
int const M=2e5+10,M2=1e6+10,mod=1e9+7,inf=1e9+10;
ll dp[123456];
ll vis[123456];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin >> n >> m;
	ll a[n+1];
	for(ll i=1; i<=n; i++){
		cin >> a[i];
	}
	ll l[m+1];
	for(ll i=1; i<=m; i++){
		cin >> l[i];
	}
	for(ll i=n; i>=1; i--){
		if(!vis[a[i]]){
			vis[a[i]]=1;
			dp[i]=dp[i+1]+1;
		}
		else{
			dp[i]=dp[i+1];
		}
	}
	for(ll i=1; i<=m; i++){
		cout << dp[l[i]] << "\n";
	}
	return 0;
}
