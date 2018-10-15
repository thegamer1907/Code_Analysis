#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long llu;
typedef long double ldo;
#define MOD (ll)1000000007
#define vll vector<ll>
#define print(A,n) for(ll i=0;i<n;++i)cout<<A[i]<<' ';cout<<endl;
#define take(A,n) for(ll i=0;i<n;++i)cin>>A[i];
#define pb push_back
#define mkp make_pair
#define pp pair<ll,ll>
#define all(a) a.begin(),a.end()
#define ff first
#define ss second
#define forz(i,n) for(ll i=0;i<n;++i)
#define rep(i,s,e) for(ll i=s;i<e;++i)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define bs(v,x) binary_search(all(v),x)
#define ub(v,x) upper_bound(all(v),x)
#define lb(v,x) lower_bound(all(v),x)
#define zoom ios_base::sync_with_stdio(false);cin.tie(NULL);
//for(auto const&x:mp)

int main()
{
	zoom;
	ll k,ans=0;
	cin>>k;
	string s;
	cin>>s;
	unordered_map<ll,ll> mp;
	ll c=0;
	forz(i,s.length())
	{
		c+=(ll)(s[i]-'0');
		if(c==k)
			++ans;
		ans+=(mp[c-k]);
		mp[c]++;
	}
	cout<<ans<<endl;
	return 0;
}