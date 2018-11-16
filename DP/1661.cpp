#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long llu;
typedef long double ldo;
#define MOD			(ll)1000000007
#define vll			vector<ll>
#define print(A,n)	for(ll i=0;i<n;++i)cout<<A[i]<<' ';cout<<endl;
#define take(A,n)	for(ll i=0;i<n;++i)cin>>A[i];
#define pb			push_back
#define pf			push_front
#define mkp			make_pair
#define pp			pair<ll,ll>
#define all(a)		a.begin(),a.end()
#define ff			first
#define ss			second
#define forz(i,n)	for(ll i=0;i<n;++i)
#define urep(i,s,e)	for(ll i=s;i>=e;--i)
#define rep(i,s,e)	for(ll i=s;i<e;++i)
#define lcm(a,b)	(a*b)/__gcd(a,b)
#define bs(v,x)		binary_search(all(v),x)
#define ub(v,x)		upper_bound(all(v),x)
#define lb(v,x)		lower_bound(all(v),x)
#define zoom		ios_base::sync_with_stdio(false);cin.tie(NULL);
//for(auto const&x:mp)

int main()
{
	zoom;
	string s;
	cin>>s;
	vll ab,ba;
	forz(i,s.length()-1)
	{
		if(s.substr(i,2)=="AB")
			ab.pb(i);
		if(s.substr(i,2)=="BA")
			ba.pb(i);
	}
	forz(i,ab.size())
		forz(j,ba.size())
			if(abs(ab[i]-ba[j])>1)
				return cout<<"YES\n",0;
	cout<<"NO\n";
	return 0;
}