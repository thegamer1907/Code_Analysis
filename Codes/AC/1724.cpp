#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) 	for(int i=a;i<b;++i)
#define RFOR(i,a,b) 	for(int i=a;i>=b;--i)
#define ln 		"\n"
#define mp make_pair
#define pb push_back
#define pii pair<ll,ll>
#define sz(a)	ll(a.size())
#define debug1(x) cout<<x<<endl
#define debug2(x,y) cout<<x<<"-->"<<y<<endl
#define debug3(x,y,z) cout<<x<<"-->"<<y<<"-->"<<z<<endl
typedef long long ll;
typedef long double ld;
ll n,m,k;
bool check(ll val)
{
	ll sumis=0;
	// cout<<endl;
	// cout<<"val"<<val<<endl;
	FOR(i,1,n+1)
	{
		sumis+=min(m,((val-1)/i));
		// cout<<sumis<<" ";
		if(sumis>k-1)return 0;
	}
	// cout<<sumis<<endl;	
	if(sumis==k-1)return -1;
	return 1;
}
void solve()
{
	ll l=1,r=n*m+1,mid;
	while(l<r-1)
	{
		mid=(l+r)/2;
		bool tmp=check(mid);
		if(tmp==1)
			l=mid;
		else if(tmp==0)r=mid;
		else break;
	}
	if(check(r)!=-1)r=l;
	cout<<r;
	return;
}
int main()
{
		ios_base::sync_with_stdio(false);
	 	cin.tie(NULL);
	 	cin>>n>>m>>k;
	 	solve();
		return 0;
}