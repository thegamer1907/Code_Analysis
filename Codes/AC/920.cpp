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
#define F first
#define S second
typedef long long ll;
typedef long double ld;
map<ll,ll> counter;
int suma[100002],sumb[100002];
int main()
{
		ios_base::sync_with_stdio(false);
	 	cin.tie(NULL);
	 	int n,k;
	 	cin>>n>>k;
	 	string str;
	 	cin>>str;
	 	FOR(i,0,n)
	 	{
	 		if(str[i]=='a')suma[i+1]+=1;
	 		else sumb[i+1]+=1;
	 	}
	 	FOR(i,1,n+1)
	 	{
	 		suma[i]+=suma[i-1];
	 		sumb[i]+=sumb[i-1];
	 	}
	 	int ans=-1;
	 	FOR(i,1,n+1)
	 	{
	 		auto it=lower_bound(suma,suma+i,suma[i]-k);
	 		ans=max(ans,int(&suma[i]-it));
	 	}
	 	FOR(i,1,n+1)
	 	{
	 		auto it=lower_bound(sumb,sumb+i,sumb[i]-k);
	 		ans=max(ans,int(&sumb[i]-it));
	 	}
	 	cout<<ans<<ln;
		return 0;
}